/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int N, c, c1, c2 = 0, c3, c4, c5;
	wprintf(L"Введите целое число: ");
	scanf("%d", &c);
	c1 = c * (-1);
	c3 = c / 10;
	c5 = c;
	while (c3 != 0)
	{
		N = c5 % 10;
		c1 = N;
		N = c3;
		c4 = N;
		while (N != 0)
		{
			N %= 10;
			if (N == c1)c2++;
			c4 /= 10;
			N = c4;
		}
		c3 /= 10;
		c5 /= 10;
		N = c3;
	}
	
	if (c2 != 0) { wprintf(L"ДА"); }
	else
	{
		wprintf(L"НЕТ");
	}
	return 0;
}*/