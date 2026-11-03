#include <iostream>
using namespace std;

struct student {
    char name[255];
    int age;
    char rol[255];
    char grupp[255];
};

int main()
{
    student st;

    cin >> st.name;
    cin >> st.age;
    cin >> st.rol;
    cin >> st.grupp;

    cout << st.name << endl<< st.age << endl<< st.rol << endl<< st.grupp << endl;

    return 0;
}
