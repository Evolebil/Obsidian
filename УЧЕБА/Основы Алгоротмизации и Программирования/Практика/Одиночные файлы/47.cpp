#include <iostream>
#include<string>

using namespace std;

int main(){
    string Mesec;
    int Date;
    cout << "Введите месяц и день через пробел: ";
    cin >>Mesec>>Date;
    if(Mesec=="март" || Mesec=="апрель" || Mesec=="май" || Mesec=="июнь"){
        if(Mesec=="март" && Date < 20){
            cout<<"Сезон - Зима";
            return 0;
        }
        if(Mesec=="июнь" && Date > 20){
            cout<<"Сезон - Лето"<<endl;
            return 0;
        }
        cout<<"Сезон - Весна"<<endl;
    }
    else if(Mesec=="июнь" || Mesec=="июль" || Mesec=="август" || Mesec=="сентябрь"){
        if(Mesec=="сентябрь" && Date > 21){
            cout<<"Сезон - Осень"<<endl;
            return 0;
        }
        cout<<"Сезон - Лето"<<endl;
    }
    else if(Mesec=="октябрь" || Mesec=="ноябрь" || Mesec=="декабрь" || Mesec=="сентябрь"){
        if(Mesec=="декабрь" && Date > 20){
            cout<<"Сезон - Зима"<<endl;
            return 0;
        }
        cout<<"Сезон - Осень"<<endl;
    }
    else if(Mesec=="март" || Mesec=="январь" || Mesec=="февраль" || Mesec=="декабрь" ){
        cout<<"Сезон - Зима"<<endl;
    }
    return 0;
}