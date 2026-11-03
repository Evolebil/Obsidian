/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int c;
usl:
	wprintf(L"Введите целое число: ");
	scanf("%d", &c);
	if (c != EOF){
		if (c  > 0)wprintf(L"Число % d положительное\n", c);
		else if(c < 0)
		{
			wprintf(L"Число % d отрицательное\n", c);
		}
		else
		{
			wprintf(L"Число % d равно нулю\n", c);
		}
	}
	goto usl;
	return 0;
}*/