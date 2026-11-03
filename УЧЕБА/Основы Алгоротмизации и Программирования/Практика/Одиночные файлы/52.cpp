#include <iostream>

using namespace std;

int main()
{
    double numericGrade;

    cout << "Введите числовую оценку: ";
    cin >> numericGrade;

    if (numericGrade >= 4.0) {
        cout << "Буквенная оценка: A+" << endl;
    } else if (numericGrade >= 3.85) {
        cout << "Буквенная оценка: A" << endl;
    } else if (numericGrade >= 3.5) {
        cout << "Буквенная оценка: A-" << endl;
    } else if (numericGrade >= 3.15) {
        cout << "Буквенная оценка: B+" << endl;
    } else if (numericGrade >= 2.85) {
        cout << "Буквенная оценка: B" << endl;
    } else if (numericGrade >= 2.5) {
        cout << "Буквенная оценка: B-" << endl;
    } else if (numericGrade >= 2.15) {
        cout << "Буквенная оценка: C+" << endl;
    } else if (numericGrade >= 1.85) {
        cout << "Буквенная оценка: C" << endl;
    } else if (numericGrade >= 1.5) {
        cout << "Буквенная оценка: C-" << endl;
    } else if (numericGrade >= 1.15) {
        cout << "Буквенная оценка: D+" << endl;
    } else if (numericGrade >= 0.85) {
        cout << "Буквенная оценка: D" << endl;
    } else if (numericGrade >= 0.0) {
        cout << "Буквенная оценка: F" << endl;
    } else {
        cout << "Ошибка: оценка не может быть отрицательной!" << endl;
        return 1;
    }

    return 0;
}