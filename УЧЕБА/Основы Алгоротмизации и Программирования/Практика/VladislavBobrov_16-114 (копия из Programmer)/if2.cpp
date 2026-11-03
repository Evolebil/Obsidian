/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int c;
	wprintf(L"Введите целое число: ");
	scanf("%d", &c);
	if (c>0)wprintf(L"Число % d ", ++c);
	else
	{
		wprintf(L"Число % d", c-2);
	}
	return 0;
}*/