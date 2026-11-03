/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int a, c=0;
	wprintf(L"Ведите натуральное число:");
	scanf("%d", &a);
	for (int i = a; i >=0; i-=2)
	{
		printf("%d\n",i);
		c++;
	}
	printf("%d\n", c);
	return 0;
}*/