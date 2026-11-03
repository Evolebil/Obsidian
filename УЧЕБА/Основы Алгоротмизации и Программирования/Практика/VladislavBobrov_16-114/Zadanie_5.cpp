/*#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);  
    SetConsoleOutputCP(1251);  

    wchar_t name[100];

    wprintf(L"Введите ваше имя: ");
    fgetws(name, 100, stdin);

    size_t len = wcslen(name);
    if (len > 0 && name[len - 1] == L'\n') {
        name[len - 1] = L'\0';
    }


    wprintf(L"Привет, %ls!", name);  

    return 0;
}*/