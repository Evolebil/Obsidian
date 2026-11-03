#include <iostream>

using namespace std;

typedef struct complex {
    double real;
    double imag;

    complex add(complex c) {
        complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }
}comp;

int main() {

    comp complex1, complex2;


    cin >> complex1.real >> complex1.imag;


    cin >> complex2.real >> complex2.imag;


    comp result = complex1.add(complex2);


    if (result.imag >= 0)
        cout << result.real << " + " << result.imag << "i" << endl;
    else
        cout << result.real << " - " << -result.imag << "i" << endl;

    return 0;
}
