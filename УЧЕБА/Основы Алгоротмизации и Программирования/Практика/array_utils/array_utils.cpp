#include "array_utils.h"

void array_print(int arr[], int size){
    for(int i=0; i < size; i++){
        cout<<"element "<<i<<" = "<<arr[i]<<endl;
    }
    return;
}
int array_sum(int arr[], int size){
    int sum=0;
    for(int i=0; i < size; i++){
        sum+=arr[i];
    }
    return sum;
}
double array_average(int arr[], int size){
    return (double)array_sum(arr, size)/size;
}
int array_max(int arr[], int size){
    int max=arr[0];
    for(int i=1; i < size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
