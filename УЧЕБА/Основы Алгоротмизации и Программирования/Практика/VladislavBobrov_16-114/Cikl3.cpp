/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int N, c, c1, c2=0;
	wprintf(L"Введите целое число: ");
	scanf("%d", &c);
	c1 = c*(-1);
	while (c != 0)
	{
		N = c % 10;
		if (N == c1) c2++; 
		c /= 10;
		c1 = N;
	}
	if (c2!=0) { wprintf(L"ДА"); }
	else
	{
		wprintf(L"НЕТ");
	}
	return 0;
}*/