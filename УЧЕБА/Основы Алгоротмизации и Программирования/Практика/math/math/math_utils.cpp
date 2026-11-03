#include"math_utils.h"

int factorial(int n){

    if (n <= 1) {
        return 1;

    } else {
        return n * factorial(n - 1);
    }
}
int gcd(int a, int b){
    int r;

    if(a>b){
    ret:
        r=a%b;
        if(r==0)
        {
            return b;
        }
        else{
            return gcd(b, r);
        }
    }

    else if(a<b){
        int swap;
        swap=a;
        a=b;
        b=swap;
        goto ret;
    }

    else{
        r=a;
        return r;
    }
}
double power(double base, int exp){

    if (exp == 1) {
        return base;
    }
    else if(exp==0){
        return 1;
    }
    else
    {
        return base * power(base, exp - 1);
    }
}
