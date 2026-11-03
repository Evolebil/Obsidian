#include <iostream>
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "");
    wcout<< L"Введите 3 переменные: ";
    int a, b, c;
    cin>>a>>b>>c;
    swap(a,b);
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}