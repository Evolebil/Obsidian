#include <iostream>

using namespace std;

int main(){
    int a;
    int* ptr=&a;

    *ptr=100;

    cout<<*ptr<<endl;

    int* ptr2=ptr;

    *ptr2=200;
    
    cout<<*ptr2<<endl;
    
    return 0;
}