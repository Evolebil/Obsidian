//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<locale.h>
//#include <string.h>
//#include"raspr.h"
//#define MAX 10
//int main() {
//	setlocale(LC_ALL, "RU");
//	float a, b = 0;
//	char potv;
//	char simvo;
//	wprintf(L"Введите первое целое число : ");
//	scanf(" %d", &b);
//	for (int i = 1; i<MAX; i++) {
//		
//		wprintf(L"Введите целое число %d: ", i);
//		scanf(" %d", &a);
//
//		wprintf(L"Введите знак (+, -, *, /, **, !): ");
//		scanf(" %c", &simvo);
//		if (simvo=='!'){
//			b=fact(b);
//		}
//		else {
//			switch (simvo)
//			{
//			case '+': b=sum(b, a);
//				break;
//			case '-': b=min(b, a);
//				break;
//			case '*': b=umn(b, a);
//				break;
//			case '/': b=del(b, a);
//				break;
//			case '^': b=step(b, a);
//				break;
//			default:
//				break;
//			}
//		}
//		printf("%d\n", b);
//
//		wprintf(L"Продолжить (y/n): ");
//		scanf(" %c", &potv);
//		if (potv =='n') break;
//	}
//	printf("%d", b);
//	return 0;
//}