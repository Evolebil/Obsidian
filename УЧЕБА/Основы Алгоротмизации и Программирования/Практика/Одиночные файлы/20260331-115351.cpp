#include <iostream>
#include <cmath>
#include <vector>
#include <chrono>
#include <thread>
#include <algorithm>  // для std::max, std::abs

// Размер экрана в консоли
const int WIDTH = 80;
const int HEIGHT = 40;

char screen[HEIGHT][WIDTH];

// Очистка буфера экрана
void clear_screen() {
    for (int y = 0; y < HEIGHT; y++)
        for (int x = 0; x < WIDTH; x++)
            screen[y][x] = ' ';
}

// Установка символа в буфер
void set_pixel(int x, int y, char c) {
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
        screen[y][x] = c;
}

// Простой алгоритм DDA для рисования линии
void draw_line(int x0, int y0, int x1, int y1, char c) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = std::max(std::abs(dx), std::abs(dy));
    if (steps == 0) {
        set_pixel(x0, y0, c);
        return;
    }
    double xinc = dx / static_cast<double>(steps);
    double yinc = dy / static_cast<double>(steps);
    double x = x0;
    double y = y0;
    for (int i = 0; i <= steps; i++) {
        set_pixel(static_cast<int>(std::round(x)), static_cast<int>(std::round(y)), c);
        x += xinc;
        y += yinc;
    }
}

// 3D-точка
struct Vec3 {
    double x, y, z;
};

// Поворот вокруг оси X
Vec3 rotateX(Vec3 p, double angle) {
    double c = std::cos(angle);
    double s = std::sin(angle);
    return {p.x, p.y * c - p.z * s, p.y * s + p.z * c};
}

// Поворот вокруг оси Y
Vec3 rotateY(Vec3 p, double angle) {
    double c = std::cos(angle);
    double s = std::sin(angle);
    return {p.x * c + p.z * s, p.y, -p.x * s + p.z * c};
}

// Очистка консоли (кросс-платформенная)
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    // 8 вершин куба (размер 2×2×2)
    std::vector<Vec3> vertices = {
        {-1, -1, -1}, {1, -1, -1}, {1, 1, -1}, {-1, 1, -1},
        {-1, -1, 1},  {1, -1, 1},  {1, 1, 1},  {-1, 1, 1}
    };

    // 12 рёбер куба (индексы вершин)
    std::vector<std::pair<int, int>> edges = {
        {0,1}, {1,2}, {2,3}, {3,0},   // передняя грань
        {4,5}, {5,6}, {6,7}, {7,4},   // задняя грань
        {0,4}, {1,5}, {2,6}, {3,7}    // соединяющие рёбра
    };

    double angleX = 0.0;
    double angleY = 0.0;

    const double DIST = 5.0;   // расстояние до камеры
    const double SCALE = 28.0; // масштаб (подбирай под свой терминал)

    while (true) {
        clearConsole();
        clear_screen();

        // Применяем повороты и рисуем рёбра
        for (const auto& edge : edges) {
            Vec3 p1 = rotateY(rotateX(vertices[edge.first], angleX), angleY);
            Vec3 p2 = rotateY(rotateX(vertices[edge.second], angleX), angleY);

            // Перспективная проекция
            double z1 = p1.z + DIST;
            double z2 = p2.z + DIST;
            if (z1 < 0.1) z1 = 0.1;
            if (z2 < 0.1) z2 = 0.1;

            double px1 = p1.x * SCALE / z1 + WIDTH / 2.0;
            double py1 = HEIGHT / 2.0 - (p1.y * SCALE / z1);  // инверсия Y

            double px2 = p2.x * SCALE / z2 + WIDTH / 2.0;
            double py2 = HEIGHT / 2.0 - (p2.y * SCALE / z2);

            draw_line(static_cast<int>(std::round(px1)),
                      static_cast<int>(std::round(py1)),
                      static_cast<int>(std::round(px2)),
                      static_cast<int>(std::round(py2)),
                      '#');
        }

        // Вывод буфера на экран
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                std::cout << screen[y][x];
            }
            std::cout << '\n';
        }

        // Увеличиваем углы (разная скорость — красивый 3D-эффект)
        angleX += 0.04;
        angleY += 0.06;

        // Задержка ~50 мс (регулируй скорость)
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    return 0;
}