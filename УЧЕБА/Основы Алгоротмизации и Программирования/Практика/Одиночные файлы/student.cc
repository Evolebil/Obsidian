#include <iostream>

using namespace std;

struct num {
    char name [80];
    int age;
    char role [50];
    char group [20];
};
int main() {
num s;
cout <<"Введите анкету студента: \n\n";
cout <<"ФИО(Без пробелом, только через нижнее подчёркивание): \n\n";
cin >> s.name;
cout <<"Возраст: \n\n";
cin >> s.age;
cout <<"Роль(Староста, зам.старосты, студент): \n\n";
cin >> s.role;
cout <<"Группа: \n\n";
cin >> s.group;
cout <<"Вывод анкеты студента: \n"; 
cout <<"ФИО: " << s.name << endl;
cout <<"Возраст: " << s.age << endl;
cout <<"Роль: " << s.role << endl;
cout <<"Группа: " << s.group << endl;
return 0;
}