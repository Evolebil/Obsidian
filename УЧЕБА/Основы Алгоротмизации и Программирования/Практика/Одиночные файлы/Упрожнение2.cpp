#include <iostream>

using namespace std;
class Complex
{
private:
    int one;
    float two;
public:
    Complex(/* args */);
    void set_one();
    int get_one();
    void set_two();
    float get_two();
};

Complex::Complex(/* args */): one(0), two(0.0)
{
    cout<<"Обьект создан"<<endl;
}
void Complex::set_one()
{
    cin>>one;
}
int Complex::get_one(){
    return one;
}
void Complex::set_two()
{
    cin>>two;
}
float Complex::get_two(){
    return two;
}


int main() {
    Complex arr_one[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Введите 2 числа"<<endl;
        cout<<"Целое: "<<endl;
        arr_one[i].set_one();
        cout<<"Вещественное: " <<endl;
        arr_one[i].set_two();
    }
    cout<<"Вывод"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Целое: "<<arr_one[i].get_one()<<endl;
        cout<<"Вещественное: "<<arr_one[i].get_two() <<endl;
    }
    return 0;
}