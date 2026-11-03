#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int num=100;
    int* ptr = (int*)calloc(2, sizeof(int));

    *ptr=num;
    *(ptr+1)=200;
    
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;

    return 0;
}