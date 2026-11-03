#include <iostream>

using namespace std;

void find(int *arr, int size, int* resmin, int* resmax){
    int min = arr[0];
    int max =  arr[0];

    for (int i = 0; i<size; i++) {
        if(max>arr[i]){
            max=arr[i];
        }
        else if (min<arr[i]) {
            min=arr[i];
        }
    }
    *resmin=min;
    *resmax=max;
}

double findsrednie(int *arr, int size){
    double srednie=0;
    int sum=0;
    for (int i = 0; i<size; i++) {
        sum+=arr[i];
    }
    srednie = sum/size;
    return srednie;
}
int findsrednieminim(int *arr, int size, double srednie){
    int count = 0;
    for (int i = 0; i<size; i++) {
        if(srednie>arr[i]){
            count++;
        }
    }
    return count;
}
void error(int *arr, int size){
    for (int i = 0; i<size; i++) {
        if(arr[i]<0){
            arr[i]=0;
        }
    }
}

int main(){
    int size = 0;

    cout<<"Введите сколько дней вы замеряли температуру: ";

    cin>>size;

    int* arr = new int[size];

    for (int i = 0; i<size; i++) {

        cout<<"Введите температуру в градусах цельсия(целое число): ";

        cin>>arr[i];
        if(arr[i]>100){
            arr[i]=100;
        }

    }
    int min = arr[0];
    int max =  arr[0];
    find(arr, size, &min, &max);
    cout<<"Максимум градусов: "<<max<<endl<<"Минимум градусов: "<<min<<endl;
    cout<<"Средняя температура: "<< findsrednie(arr, size)<<endl;
    double srednie = findsrednie(arr, size);
    cout<<"Колличество дней, когда температура была ниже средней: "<< findsrednieminim(arr, size, srednie)<<endl;
    error(arr, size);
    cout<<"ПРОИЗОШЛА ОШИБКА"<<endl;
    for (int i = 0; i<size; i++) {

        cout<<"ДЕНЬ: "<< i <<"ТЕМПЕРАТУРА: "<<arr[i]<<endl;

    }
    delete [] arr;

    return 0;
}   