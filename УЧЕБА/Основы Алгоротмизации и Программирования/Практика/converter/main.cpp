#include <iostream>
#include "converter.h"

using namespace std;

int main()
{
    double c, km, bytes;
    cout << "c=";
    cin>>c;
    cout << "F="<<celsius_to_fahrenheit(c)<<endl;
    cout << "km=";
    cin>>km;
    cout << "mile="<<km_to_miles(km)<<endl;
    cout << "bytes=";
    cin>>bytes;
    cout << "mb="<<bytes_to_mb(bytes)<<endl;
    return 0;
}
