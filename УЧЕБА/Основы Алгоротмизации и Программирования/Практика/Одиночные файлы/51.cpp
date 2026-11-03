#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double discriminant;
    double root1, root2;

    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Два действительных корня: " << root1 << " и " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Один действительный корень: " << root1 << endl;
    } else {
        cout << "Действительных корней нет" << endl;
    }

    return 0;
}