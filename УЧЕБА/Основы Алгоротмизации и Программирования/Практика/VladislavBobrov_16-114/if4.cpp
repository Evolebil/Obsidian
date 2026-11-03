/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int c, a, b, e=0;
	wprintf(L"Введите три целых чисел: ");
	scanf("%d%d%d", &c,&a,&b);
	if (c > 0) e++;
	if (a > 0) e++;
	if (b > 0) e++;
	wprintf(L"Положительных чисел %d", e);
	return 0;
}*/