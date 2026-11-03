/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	double F, C;
	wprintf(L"Введите температуру в Фаренгейтах: ");
	setlocale(LC_NUMERIC, "C");
	scanf("%lf", &F);
	C = (F - 32)*5/9;
	setlocale(LC_ALL, "RU");
	wprintf(L"температура в Цельсиях: %.2lf\n", C);
	return 0;
}*/