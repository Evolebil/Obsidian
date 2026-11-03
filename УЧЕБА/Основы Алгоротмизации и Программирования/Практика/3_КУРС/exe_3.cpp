#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> balls;
    vector<int> alfaBALSS;
    vector<int> fiveBALSS;
    int a=1;
    while (a > 0 && a <= 10) {
        cout<<"Ведите оценку от 1 до 10, если же вы хотите выйти из написания оценок введите любое число кроме диаопозона от 1 до 10:";
        cin>>a;
        if (a < 1 ||  a > 10) {
            break;
        }
        balls.push_back(a);
    
    }
    cout<<"__________________________________________________________________________________________"<<endl<<endl;
    auto it = std::copy_if(balls.begin(), balls.end(), back_inserter(alfaBALSS), [](int n) {
        return n>=5;
    });
    for (int i=0; i<alfaBALSS.size(); i++) {
        cout<<"Массив от 5 и больше:"<< alfaBALSS[i]<<endl;
    }
    transform(balls.begin(), balls.end(), back_inserter(fiveBALSS), [](int x) {
        if (x>7) {
            return 5;
        }else if (x<4) {
            return 2;
        }
        return x-2;
    });
    cout<<"__________________________________________________________________________________________"<<endl<<endl;
    for (int i=0; i<fiveBALSS.size(); i++) {
        cout<<"Массив с пятибальной шкалой:"<< fiveBALSS[i]<<endl;
    }

    auto its = std::find_if(balls.begin(), balls.end(), [](int n) {
        return n % 3 == 0; // условие: число чётное
    });
    cout<<"__________________________________________________________________________________________"<<endl<<endl;
    if (its != balls.end()) {
        std::cout << "Найден элемент: " << *its << '\n'; // Выведет 4
    } else {
        std::cout << "Элемент не найден\n";
    }
}