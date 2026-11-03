#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "");
    char symvol;
    cout<<"vvedite symvol: ";
    cin>> symvol;
    if(symvol == 'a' | symvol == 'e' | symvol == 'i' | symvol == 'o' | symvol == 'u'){
        cout<< "symvol - glassnyi";
    }
    else if(symvol == 'y'){
        cout << "symvol and glassnyi and sodlassnyi";
    }
    else{
        cout<< "symvol glassnyi";
    }
    return 0;
}