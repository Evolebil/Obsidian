/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "RU");
	float A, B, C;
	wprintf(L"Введите два вещественных число: ");
	scanf("%f%f", &A, &B);
	if (A > B) { C = A; A = B; B = C;  wprintf(L"Число  A=%f \n ", A); wprintf(L"Число  B=%f \n ", B); }
	else
	{
		wprintf(L"Число  A=%f \n ", A);
		wprintf(L"Число  B=%f \n ", B);
	}
	return 0;
}*/