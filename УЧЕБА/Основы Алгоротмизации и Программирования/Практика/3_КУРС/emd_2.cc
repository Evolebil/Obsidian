#include <iostream>
#include <string>
using namespace std;

class StudentAccount {
private:
    string studentName;// имя
    int lectureCredits;//деньги

public:
    StudentAccount(string name, int initialCredits)//конструктор класса - он срабатывает автоматически и заполняет объекты значениямм
        : studentName(name), lectureCredits(initialCredits) {}//инициализация обектов, вместо того чтобы сначало создать а потом присвоить, так оно сразу создаёться заполненым
    void earnCredits(int amount) {
        if (amount <= 0) {
            cout << "ERROR: invalid amount " << amount << "\n";
            return;
        }
        lectureCredits += amount;
        cout << "EARN " << amount << " OK, balance=" << lectureCredits << "\n";
    }

    void spendCredits(int amount) {
        if (amount <= 0) {
            cout << "ERROR: invalid amount " << amount << "\n";
            return;
        }
        if (amount > lectureCredits) {
            cout << "ERROR: insufficient funds\n";
            return;
        }
        lectureCredits -= amount;
        cout << "SPEND " << amount << " OK, balance=" << lectureCredits << "\n";
    }

    int getCredits() {
        return lectureCredits;
    }

    void printInfo() {
        cout << "NAME: " << studentName << "\n";
        cout << "BALANCE: " << lectureCredits << "\n";
    }
};

int main() {
    string name;
    int credits;
    cin >> name >> credits;

    StudentAccount acc(name, credits);

    string command;
    while (cin >> command) {//ввод пока файл не кончиться, нельзя вводить просто так в терминале надо нажать специальную комбинацию кнопок
        if (command == "EARN") {
            int amount;
            cin >> amount;
            acc.earnCredits(amount);
        } else if (command == "SPEND") {
            int amount;
            cin >> amount;
            acc.spendCredits(amount);
        } else if (command == "INFO") {
            acc.printInfo();
        } else if (command == "END") {
            break;
        }
    }

    return 0;
}