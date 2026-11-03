#include <iostream>

using namespace std;

int main() {
    int birthYear;
    int offset;
    
    cout << "Введите год рождения: ";
    cin >> birthYear;
    
    offset = birthYear - 2000;
    
    while (offset < 0) {
        offset += 12;
    }
    while (offset >= 12) {
        offset -= 12;
    }
    
    switch (offset) {
        case 0: 
            cout << "Вы Дракон, какой стихии только осталось понять и откуда и какой вид..." << endl;
            break;
        case 1: 
            cout << "Вы Змейка" << endl;
            break;
        case 2: 
            cout << "Вы Лошадь, вас будут пасти" << endl;
            break;
        case 3: 
            cout << "Вы Коза. Вы вегетарианец?" << endl;
            break;
        case 4: 
            cout << "Вы Обезьяна, любите деревья?" << endl;
            break;
        case 5: 
            cout << "Вы Петух, как же вас любят соседи" << endl;
            break;
        case 6: 
            cout << "Вы Собака, верность ваш залог в жизни" << endl;
            break;
        case 7: 
            cout << "Вы Свинья, нету слов" << endl;
            break;
        case 8: 
            cout << "Вы Крыса, хехехехехееххеех(гоблинский смех)" << endl;
            break;
        case 9: 
            cout << "Вы Бык, какая вы сегодня злость?" << endl;
            break;
        case 10: 
            cout << "Вы Тигр, вас надо больше" << endl;
            break;
        case 11: 
            cout << "Вы Кролик, милашка" << endl;
            break;
        default:
            cout<<"ERROR, КТО ВЫ?"<< endl;
            break;
    }
    
    return 0;
}