#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "");
    float dog_age;
    int human_age;
    cout<<"Vvedite vosrast: ";
    cin>>human_age;
    if(human_age>=0){
        if(human_age<=2){
            dog_age=10.5*human_age;
        }
        else{
            dog_age=21+4*human_age;
        }
        cout<<"Sobake: "<<dog_age<< endl;
    }
    else{
        cout<<"Error!!"<<endl;
    }
    return 0;
}