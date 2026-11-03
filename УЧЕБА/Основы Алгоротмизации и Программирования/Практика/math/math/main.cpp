#include"math_utils.h"

using namespace std;

int main(){
    int one, two;
    double number;

    cout << "Enter number for factorial: ";
    if(!(cin >> one)) return 1;
    cout << factorial(one) << endl;

    cout << "Enter two numbers for GCD: ";
    if(!(cin >> one >> two)) return 2;
    cout << gcd(one, two) << endl;

    cout << "Enter base and exponent: ";
    if(!(cin >> number >> one)) return 3;
    cout << power(number, one) << endl;
    return 0;
}

