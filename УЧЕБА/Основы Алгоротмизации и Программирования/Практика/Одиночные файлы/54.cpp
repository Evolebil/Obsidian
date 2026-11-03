#include <iostream>

using namespace std;

int main()
{
    double rating;

    cout << "Введите рейтинг сотрудника: ";
    cin >> rating;

    if (rating == 0.0) {
        cout << "Уровень: Низкий уровень" << endl;
        cout << "Прибавка к зарплате: $0" << endl;
    } else if (rating == 0.4) {
        cout << "Уровень: Удовлетворительный уровень" << endl;
        cout << "Прибавка к зарплате: $" << rating * 2400.0 << endl;
    } else if (rating >= 0.6) {
        cout << "Уровень: Высокий уровень" << endl;
        cout << "Прибавка к зарплате: $" << rating * 2400.0 << endl;
    } else {
        cout << "Ошибка: некорректный рейтинг!" << endl;
        cout << "Допустимые значения: 0.0, 0.4, 0.6 и выше" << endl;
        return 1;
    }

    return 0;
}