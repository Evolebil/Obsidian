#include <iostream>

using namespace std;
class Integer
{
private:
    int one;
public:
    Integer(/* args */);
    int set();
    int get();
    void print();
};

Integer::Integer(/* args */)
{
    cout<<"Обьект создан"<<endl;
}
int Integer::set()
{
    cin>>one;
    return 0;
}
int Integer::get(){
    return one;
}
void Integer::print(){
    cout<<"Вывод "<<one<<endl;
}

int main() {
    Integer vivo;
    vivo.set();
    cout<<vivo.get()<<endl;
    vivo.print();
    return 0;
}