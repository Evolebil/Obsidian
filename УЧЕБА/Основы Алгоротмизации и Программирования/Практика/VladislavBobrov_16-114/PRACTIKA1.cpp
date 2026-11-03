/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int c;
	wprintf(L"Введите целое число: ");
	scanf("%d", &c);
	if (c % 2 == 0)wprintf(L"Число % d чётное", c);
	else
	{
		wprintf(L"Число % d нечётное", c);
	}
	return 0;
}*/