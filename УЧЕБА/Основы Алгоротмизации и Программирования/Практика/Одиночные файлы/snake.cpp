#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <cstdlib>

using namespace std;

const int width = 40;
const int height = 20;

bool gameOver;
int x, y;
int foodX, foodY;
int score;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

int tailX[100], tailY[100];
int nTail;

/* ---------- Ввод без Enter ---------- */

int kbhit()
{
    termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }
    return 0;
}

char getch()
{
    char buf = 0;
    termios old = {};
    tcgetattr(0, &old);
    old.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(0, TCSANOW, &old);
    read(0, &buf, 1);
    return buf;
}

/* ---------- Игра ---------- */

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    foodX = rand() % (width - 2) + 1;
    foodY = rand() % (height - 2) + 1;
    score = 0;
}

void Draw()
{
    cout << "\033[2J\033[1;1H"; // очистка экрана

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0) cout << "#";

            if (i == y && j == x)
                cout << "O";
            else if (i == foodY && j == foodX)
                cout << "F";
            else
            {
                bool tail = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        tail = true;
                        break;
                    }
                }
                if (!tail) cout << " ";
            }

            if (j == width - 1) cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void Input()
{
    if (kbhit())
    {
        char ch = getch();
        switch (ch)
        {
        case 'a': if (dir != RIGHT) dir = LEFT; break;
        case 'd': if (dir != LEFT) dir = RIGHT; break;
        case 'w': if (dir != DOWN) dir = UP; break;
        case 's': if (dir != UP) dir = DOWN; break;
        case 'x': gameOver = true; break;
        }
    }
}

void Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++)
    {
        int prev2X = tailX[i];
        int prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
    case LEFT:  x--; break;
    case RIGHT: x++; break;
    case UP:    y--; break;
    case DOWN:  y++; break;
    default: break;
    }

    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = true;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;

    if (x == foodX && y == foodY)
    {
        score += 10;
        foodX = rand() % (width - 2) + 1;
        foodY = rand() % (height - 2) + 1;
        nTail++;
    }
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        usleep(100000); // скорость
    }

    cout << "Game Over" << endl;
    return 0;
}
