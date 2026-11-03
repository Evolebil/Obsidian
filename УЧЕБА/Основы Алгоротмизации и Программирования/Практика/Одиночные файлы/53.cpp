#include <iostream>
#include <string>

using namespace std;

int main()
{
    string grade;

    cout << "Введите буквенную оценку: ";
    cin >> grade;

    if (grade == "A+") {
        cout << "Числовая оценка: 4.0" << endl;
    } else if (grade == "A") {
        cout << "Числовая оценка: 4.0" << endl;
    } else if (grade == "A-") {
        cout << "Числовая оценка: 3.7" << endl;
    } else if (grade == "B+") {
        cout << "Числовая оценка: 3.3" << endl;
    } else if (grade == "B") {
        cout << "Числовая оценка: 3.0" << endl;
    } else if (grade == "B-") {
        cout << "Числовая оценка: 2.7" << endl;
    } else if (grade == "C+") {
        cout << "Числовая оценка: 2.3" << endl;
    } else if (grade == "C") {
        cout << "Числовая оценка: 2.0" << endl;
    } else if (grade == "C-") {
        cout << "Числовая оценка: 1.7" << endl;
    } else if (grade == "D+") {
        cout << "Числовая оценка: 1.3" << endl;
    } else if (grade == "D") {
        cout << "Числовая оценка: 1.0" << endl;
    } else if (grade == "F") {
        cout << "Числовая оценка: 0.0" << endl;
    } else {
        cout << "Ошибка: неверная буквенная оценка!" << endl;
    }

    return 0;
}