#include <iostream>
using namespace std;
int main(){
    int day, mesec;
    cout<<"Введите день и месяц: ";
    cin >> day >> mesec;
    switch (day)
    {
    case 1:
        if(mesec==1){
            cout<<"Новый код"<<endl;
        }
        if(mesec==7){
            cout<<"День Канады"<<endl;
        }
        break;
    case 25:
        if(mesec==12){
            cout<<"Рождество"<<endl;
        }
        break;
    default:
        cout<<"В этот день праздника нет"<<endl;
        break;
    }
    return 0;
}