#include <iostream>

using namespace std;

int main()
{
    double num, srNum = 0, Sum = 0, chek = 1;

    cout << "введите первое число: ";

    cin >> num;
    
    if (num==0)
    {
        cout<<"Error"<< endl;;
    }
    else
    {
        for(; num!=0; )
        {

            Sum+=num;
            chek++;

            cout<<"введите число "<< chek<<": ";

            cin>>num;
        }
        chek--;
        srNum = Sum/chek;

        cout<<"Среднее число = " << srNum<<endl;
    }

    return 0;
}