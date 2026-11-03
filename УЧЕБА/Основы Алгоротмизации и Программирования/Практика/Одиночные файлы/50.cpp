#include <iostream>

using namespace std;

int main()
{
    double magnitude;

    cout << "Введите магнитуду землетрясения: ";
    cin >> magnitude;

    if (magnitude < 2.0) {
        cout << "Уровень землетрясения: Минимальное" << endl;
    } else if (magnitude < 3.0) {
        cout<<"Уровень землетрясения: Очень слабое"<<endl;
    } else if (magnitude < 4.0) {
        cout<<"Уровень землетрясения: Слабое"<<endl;
    } else if (magnitude < 5.0) {
        cout<<"Уровень землетрясения: Промежуточное"<<endl;
    } else if (magnitude < 6.0) {
        cout<<"Уровень землетрясения: Умеренное"<<endl;
    } else if (magnitude < 7.0) {
        cout<<"Уровень землетрясения: Сильное"<<endl;
    } else if (magnitude < 8.0) {
        cout<<"Уровень землетрясения: Очень сильное"<<endl;
    } else if (magnitude < 10.0) {
        cout<<"Уровень землетрясения: Огромное"<<endl;
    } else {
        cout<<"Уровень землетрясения: Разрушительное"<<endl;
    }
    return 0;
}