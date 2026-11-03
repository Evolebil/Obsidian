#include <iostream>

using namespace std;

int main(){
    int a=10;
    int* int_p=&a;

    cout<<*int_p<<endl;
    
    *int_p+=1;
    
    cout<<*int_p<<endl;
    
    return 0;
}