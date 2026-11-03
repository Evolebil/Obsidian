#include <iostream>
#include<string>

using namespace std;

int main(){
    string Mesec;
    int Date;
    cout << "Введите месяц и день через пробел: ";
    cin >>Mesec>>Date;
    if(Date>=22 && Mesec == "декабрь" || Date<=19 && Mesec == "январь"){
        cout<<"Ваш знак задиака - Козерог "<<endl;
    }
    else if(Date>=20 && Mesec == "январь" || Date<=18 && Mesec == "февраль"){
        cout<<"Ваш знак задиака - Водолей"<<endl;
    }
    else if(Date>=19 && Mesec == "февраль" || Date<=20 && Mesec == "март"){
        cout<<"Ваш знак задиака - Рыбы"<<endl;
    }
    else if(Date>=21 && Mesec == "март" || Date<=19 && Mesec == "апрель"){
        cout<<"Ваш знак задиака - Овен"<<endl;
    }
    else if(Date>=20 && Mesec == "апрель" || Date<=20 && Mesec == "май"){
        cout<<"Ваш знак задиака - Телец"<<endl;
    }
    else if(Date>=21 && Mesec == "май" || Date<=20 && Mesec == "июнь"){
        cout<<"Ваш знак задиака - Близнецы"<<endl;
    }
    else if(Date>=21 && Mesec == "июнь" || Date<=22 && Mesec == "июль"){
        cout<<"Ваш знак задиака - Рак"<<endl;
    }
    else if(Date>=23 && Mesec == "июль" || Date<=22 && Mesec == "август" ){
        cout<<"Ваш знак задиака - Лев"<<endl;
    }
    else if(Date>=23 && Mesec == "август"  || Date<=22 && Mesec == "сентябрь"){
        cout<<"Ваш знак задиака - Дева"<<endl;
    }
    else if(Date>=23 && Mesec == "сентябрь" || Date<=22 && Mesec == "октябрь"){
        cout<<"Ваш знак задиака - Весы"<<endl;
    }
    else if(Date>=23 && Mesec == "октябрь" || Date<=21 && Mesec == "ноябрь"){
        cout<<"Ваш знак задиака - Скорпион"<<endl;
    }
    else if(Date>=22 && Mesec == "ноябрь" || Date<=21 && Mesec == "декабрь"){
        cout<<"Ваш знак задиака - Стрилец"<<endl;
    }
    else{
        cout<<"КТО ТЫ ЧЕБУРЕК!?"<<endl;
    }
    return 0;
}