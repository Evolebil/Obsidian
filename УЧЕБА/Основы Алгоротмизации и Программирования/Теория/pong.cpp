#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>


#define BALL_F  4
#define AI_F    2
#define PAD     2

static termios origTerm;
static int  fw, fh;
static int  bx, by, dx, dy;
static int  py, ay;
static long ps, as_;
static int  running;

static char *fb;


////////////////

static void enableRaw()
{
    tcgetattr(STDIN_FILENO, &origTerm);
    termios r = origTerm;
    r.c_lflag    &= ~(ECHO | ICANON);
    r.c_cc[VMIN]  = 0;
    r.c_cc[VTIME] = 0;
    tcsetattr(STDIN_FILENO, TCSANOW, &r);
}


////////////////

static void disableRaw()
{
    tcsetattr(STDIN_FILENO, TCSANOW, &origTerm);
}


////////////////

static void put(int x, int y, char c)
{
    if (x < 0 || x >= fw || y < 0 || y >= fh) return;
    fb[y * (fw + 1) + x] = c;
}


////////////////

static void resetBall(int dirX)
{
    bx = fw / 2;
    by = fh / 2;
    dx = dirX;
    dy = (rand() % 2) * 2 - 1;
}


////////////////

static void init()
{
    winsize ws;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws);
    fw = (int)ws.ws_col;
    fh = (int)ws.ws_row - 2;

    py = fh / 2;
    ay = fh / 2;
    ps  = 0;
    as_ = 0;
    running = 1;

    srand((unsigned)time(0));
    resetBall(1);

    fb = (char*)malloc((size_t)(fh * (fw + 1) + 1));
    for (int r = 0; r < fh; r++) {
        memset(fb + r * (fw + 1), ' ', (size_t)fw);
        fb[r * (fw + 1) + fw] = '\n';
    }
    fb[fh * (fw + 1)] = '\0';
}


////////////////

static void build()
{
    for (int r = 0; r < fh; r++)
        memset(fb + r * (fw + 1), ' ', (size_t)fw);

    for (int i = -PAD; i <= PAD; i++) {
        put(1,      py + i, '|');
        put(fw - 2, ay + i, '|');
    }
    put(bx, by, '0');
}


////////////////

static void render()
{
    char score[64];
    int slen = snprintf(score, sizeof(score),
                        "Player: %ld  |  AI: %ld  (ESC=exit)", ps, as_);

    write(STDOUT_FILENO, "\033[H", 3);
    write(STDOUT_FILENO, score, (size_t)slen);

    char pad[128];
    int plen = fw - slen;
    if (plen > 0) {
        memset(pad, ' ', (size_t)plen);
        write(STDOUT_FILENO, pad, (size_t)plen);
    }
    write(STDOUT_FILENO, "\n", 1);
    write(STDOUT_FILENO, fb, (size_t)(fh * (fw + 1)));
}


////////////////

static void input()
{
    char buf[4] = {};
    ssize_t n = read(STDIN_FILENO, buf, 3);
    if (n <= 0) return;

    if (n == 1 && buf[0] == 27) { running = 0; return; }

    if (n == 3 && buf[0] == '\033' && buf[1] == '[') {
        if (buf[2] == 'A') {
            py--;
            if (py - PAD < 0) py = PAD;
        }
        if (buf[2] == 'B') {
            py++;
            if (py + PAD >= fh) py = fh - 1 - PAD;
        }
    }
}


////////////////

static void updateAi()
{
    static int frame = 0;
    if (++frame % AI_F != 0) return;

    if (by < ay && ay - PAD > 0)      ay--;
    if (by > ay && ay + PAD < fh - 1) ay++;
}


////////////////

static void updateBall()
{
    static int frame = 0;
    if (++frame % BALL_F != 0) return;

    int nx = bx + dx;
    int ny = by + dy;

    if (ny < 0)   { ny = 0;      dy = -dy; }
    if (ny >= fh) { ny = fh - 1; dy = -dy; }

    if (nx <= 2 && dx < 0 && ny >= py - PAD && ny <= py + PAD) {
        dx = -dx; nx = 3;
        int n = rand() % 3 - 1; if (n) dy = n;
    }
    if (nx >= fw - 3 && dx > 0 && ny >= ay - PAD && ny <= ay + PAD) {
        dx = -dx; nx = fw - 4;
        int n = rand() % 3 - 1; if (n) dy = n;
    }

    if (nx < 0)   { as_++; resetBall( 1); return; }
    if (nx >= fw) { ps++;  resetBall(-1); return; }

    bx = nx;
    by = ny;
}


////////////////

int main()
{
    enableRaw();
    init();

    write(STDOUT_FILENO, "\033[?25l\033[2J\033[H", 11);

    while (running) {
        input();
        updateAi();
        updateBall();
        build();
        render();
        usleep(16000);
    }

    write(STDOUT_FILENO, "\033[?25h", 6);
    disableRaw();
    free(fb);

    write(STDOUT_FILENO, "\033[2J\033[H", 7);

    char fin[64];
    int len = snprintf(fin, sizeof(fin),
                       "Game over!\nPlayer: %ld  |  AI: %ld\n", ps, as_);
    write(STDOUT_FILENO, fin, (size_t)len);

    return 0;
}
