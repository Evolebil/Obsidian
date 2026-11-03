/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	int A, B, C;
	wprintf(L"Введите два вещественных число: ");
	scanf("%d%d", &A, &B);
	if (A > B) { C = A; B = C;  wprintf(L"Число  A=%d \n ", A); wprintf(L"Число  B=%d \n ", B); }
	else if (A < B)
	{
		C = B;
		A = C;
		wprintf(L"Число  A=%d \n ", A );
		wprintf(L"Число  B=%d \n ", B );
	}
	else
	{
		wprintf(L"Число  A=%d \n ", A = 0);
		wprintf(L"Число  B=%d \n ", B = 0);
	}
	return 0;
}*/