#include <iostream>
#include <locale>
#include <algorithm>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int num;
    wcout<< L"Введите число \n>>>";
    cin >> num;
    if(num % 2 == 0){
        wcout<<L"Число - чётное"<<endl;
    }
    else{
        wcout<<L"Число - нечётное"<<endl;
    }
    return 0;
}