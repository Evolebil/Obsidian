#include <iostream>
#include<string>

using namespace std;

int main(){
    string coord;

    cout << "Введите координаты клетки на шахмотной доске: ";

    cin >> coord;

    char symbol = coord[0];//всё взято из интернета!! Так как стринг это строка которая может считаться массивом(это как я понял) то можно просто взять отдельный элемент масссива
    int num = coord[1] - '0', a;//я посмотрел в инете как из стринг сделать инт - надо отнять 0
    a=num % 2;
    if(symbol=='a' || symbol=='c' || symbol=='e' || symbol=='g' ){
        if(a==1 && num<9 && num>0){
            cout<<"Клетка "<<coord<<" чёрная"<<endl;
        }
        else if(a==0 && num<9 && num>0){
            cout<<"Клетка "<<coord<<" Белая"<<endl;
        }
    }
    else if(symbol=='b' || symbol=='d' || symbol=='f' || symbol=='h' ){
        if(a==0 && num<9 && num>0){
            cout<<"Клетка "<<coord<<" чёрная"<<endl;
        }
        else if(a==1 && num<9 && num>0){
            cout<<"Клетка "<<coord<<" Белая"<<endl;
        }
    }
    return 0;
}