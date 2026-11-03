#include <iostream>
#include "array_utils.h"
using namespace std;

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* dynamicArray = new int[size];

    for (int i = 0; i < size; ++i) {
        cin>>dynamicArray[i];
    }

    cout << "Массив: ";
    array_print(dynamicArray, size);

    cout << "Сумма: " << array_sum(dynamicArray, size) << endl;
    cout << "Среднее: " << array_average(dynamicArray, size) << endl;
    cout << "Максимум: " << array_max(dynamicArray, size) << endl;
    delete[] dynamicArray;
    dynamicArray = nullptr;
    return 0;
}
