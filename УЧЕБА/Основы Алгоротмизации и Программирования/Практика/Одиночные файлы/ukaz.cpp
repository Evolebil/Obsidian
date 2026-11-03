#include <iostream>

using namespace std;

int main(){
    int a=10;
    int* int_p=&a;
    cout<<*int_p<<endl<<a<<endl;
    *int_p++;
    cout<<*int_p<<endl<<a<<endl;
    return 0;
}