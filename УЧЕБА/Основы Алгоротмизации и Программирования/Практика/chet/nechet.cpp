#include <iostream>
#include<string>

using namespace std;

int main(){

    int num, oddEven, oddSum=0, oddMin=0, oddMax=0, evenSum=0, evenMin=0, evenMax=0, minChek;
    unsigned int chek=0;
    chek-=1;
    chek/=2;
    oddMin=chek;
    evenMin=chek;
    minChek=chek*(-1);
    oddMax=minChek;
    evenMax=minChek;
    do
    {
        cin>>num;

        oddEven=num%2;
        if(oddEven==-1) oddEven*=-1;
        if(oddEven==1){
            oddSum+=num;
            if(oddMin>num){
                oddMin=num;
            }
            if(oddMax<num){
                oddMax=num;
            }
        }
        else if(oddEven==0){
            evenSum+=num;
            if(evenMin>num && num!=0){
                evenMin=num;
            }
            if(evenMax<num){
                    evenMax=num;
            }
        }
        else{
            cout<<"ERROR"<<endl;
            break;
        }
    } while (num!=0);

    cout<<"oddSum: "<<oddSum<<endl;

    if(oddMin==0 || oddMin==chek)
    {
        cout<<"oddMin: Нет"<<endl;
    }
    else
    {
        cout<<"oddMin: "<<oddMin<<endl;
    }
    if(oddMax==0 || oddMax==minChek)
    {
        cout<<"oddMax: Нет"<<endl;
    }
    else
    {
        cout<<"oddMax: "<<oddMax<<endl;
    }

    cout<<"evenSum: "<<evenSum<<endl;

    if(evenMin==0 || evenMin==chek)
    {
        cout<<"evenMin: Нет"<<endl;
    }
    else
    {
        cout<<"evenMin: "<<evenMin<<endl;
    }
    if(oddMax==0 || evenMax==minChek)
    {
        cout<<"evenMax: Нет"<<endl;
    }
    else
    {
        cout<<"evenMax: "<<evenMax<<endl;
    }

    return 0;
}