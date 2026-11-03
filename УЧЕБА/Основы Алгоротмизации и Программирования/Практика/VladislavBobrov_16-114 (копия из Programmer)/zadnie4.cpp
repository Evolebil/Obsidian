/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int A, b, c, d, f, g, summa;
	wprintf(L"¬ведите трЄхзначное число:");
	wscanf(L"%d", &A);
	b = A / 100;
	c = A / 10;
	d = b*10;
	c %=d ;
	c *= 100;
	f=A%100;
	g = f % 10;
	summa = c + d+g;
	printf("%d",summa);
	return 0;
}*/