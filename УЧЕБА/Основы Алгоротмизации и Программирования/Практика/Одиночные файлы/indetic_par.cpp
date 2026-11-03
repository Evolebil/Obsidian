#include <iostream>
#include<string>

using namespace std;

int main(){

    int quantity, first, two, difference=0, maxDifference=0;
    double maxSum, sum;

    cout<<"Введите количество целочисленых пар значений : ";
    cin>>quantity;

    quantity*=2;

    for(int i=1; i<=quantity; i++){

        if(i % 2 == 0){
            cin>>two;

            sum=two+first;

            if(i==2){
                maxSum=sum;
            }

            if(maxSum!=sum){
                difference=abs(maxSum-sum);
                if(difference>maxDifference) maxDifference=difference;
            }

            maxSum=max(sum, maxSum);

            goto jamp;
        }

        cin>>first;

        jamp:
    }

    if(maxDifference==0){
        cout<<"Да, значение = "<<sum<<endl;
    }
    else{
        cout<<"Нет, maxdiff = "<<maxDifference<<endl;
    }
    return 0;
}