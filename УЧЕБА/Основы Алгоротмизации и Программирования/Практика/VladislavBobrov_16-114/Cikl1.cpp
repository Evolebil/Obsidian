/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int N, c, c1;
	wprintf(L"Введите целое число: ");
	scanf("%d", &c);
	c1 = c; 
	N = 0;
	while (c!=0)
	{
		c = c / 10;
		N++;
	}
	if (N == 3) { wprintf(L"ДА"); }
	else
	{
		wprintf(L"НЕТ");
	} 
	return 0;
}*/