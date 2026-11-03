/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int N, c, c1;
	wprintf(L"¬ведите целое число: ");
	scanf("%d", &c);
	c1 = c;
	N = 0;
	while (c != 0)
	{
		N += c % 10;
		c /= 10;
	}
	printf("%d", N);
	return 0;
}*/