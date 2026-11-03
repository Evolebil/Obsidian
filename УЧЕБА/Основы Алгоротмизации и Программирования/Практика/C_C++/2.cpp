#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a, b=0;
    cout<<"Введите a"<<endl << ">>> ";
    cin>> a;
    for(int i=0; i<a; i++)
    {
        ++b;
        for (int j=0; j<b; j++)
        {
            cout<< b << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}