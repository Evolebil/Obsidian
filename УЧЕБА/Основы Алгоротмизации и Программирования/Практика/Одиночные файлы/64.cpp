#include <iostream>

using namespace std;

int main()
{
    double cel=4.95, cell=0, sum=0;
    cout<< "|Изначальная цена|Cумма скидок|Новая цена|"<<endl;
    cout<< "_________________________________________"<<endl;
    for(int i=0; i<5; i++)
    {
        sum= cel*0.6;
        cell= cel - sum;
        cout<<"|"<<cel<<"\t|"<< sum<<"|"<<"\t"<< cell<<"|"<<endl;
        cout<<"_____________________________"<<endl;
        cel+=5;
    }
    
    return 0;
}