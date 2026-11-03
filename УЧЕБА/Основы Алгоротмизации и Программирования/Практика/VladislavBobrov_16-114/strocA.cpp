#include<stdio.h>
#include<locale>
#include<iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	char arr[80], *ptr;
	ptr = arr;
	printf("¬ведите страку(мах: 80): ");
	scanf_s("%c", ptr);
	for (int i = 0; i < 80; i++) {
		if (ptr[i] == 'a') { ptr[i] = 'A'; }
		if (ptr[i] == 'b') { ptr[i] = 'B'; }
	}
	for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
		printf("%c", ptr[i]);
	}
	return 0;
}