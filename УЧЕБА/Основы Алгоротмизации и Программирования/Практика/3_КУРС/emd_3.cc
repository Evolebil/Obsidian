#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int id;
    string name;
    int score;
};

class Group {
private:
    vector<Student> students;

public:
    void addStudent(int id, string name, int score) {
        students.push_back({id, name, score});
    }

    void printAll() {
        for (const auto& s : students) {
            cout << s.id << " " << s.name << " " << s.score << "\n";
        }
    }

    void giveBonus(int bonus) {
        for (auto& s : students) {
            if (s.score < 90) {
                s.score += bonus;
            }
        }
    }

    void sortByScore() {
        sort(students.begin(), students.end(),
            [](const Student& a, const Student& b) {
                return a.score > b.score;
            });
    }

    int countExcellent(int minScore) {
        return count_if(students.begin(), students.end(),
            [minScore](const Student& s) {
                return s.score > minScore;
            });
    }
};

int main() {
    int n;
    cin >> n;

    Group group;
    for (int i = 0; i < n; i++) {
        int id, score;
        string name;
        cin >> id >> name >> score;
        group.addStudent(id, name, score);
    }

    string command;
    while (cin >> command) {
        if (command == "BONUS") {
            int bonus;
            cin >> bonus;
            group.giveBonus(bonus);
        } else if (command == "PRINT") {
            group.printAll();
        } else if (command == "SORT") {
            group.sortByScore();
        } else if (command == "COUNT") {
            int minScore;
            cin >> minScore;
            cout << group.countExcellent(minScore) << "\n";
        } else if (command == "END") {
            break;
        }
    }

    return 0;
}