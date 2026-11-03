/*#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "");
	int a, chet;
	wprintf(L"Введите число для проверки: ");

	scanf_s("%d", &a);

	chet = a % 2;//вынесение условия(использовал для проверки)
	if (a % 2 == 0 && a > 0) { wprintf(L"Число четное и положительное"); }
	else
	{
		wprintf(L"Число не соответствует условиям");
	}
	return 0;
}*/