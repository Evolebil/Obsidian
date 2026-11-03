#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main() {
    setlocale(LC_ALL, "C");
    
    float sum, NDS, Final;
    const float proc = 0.2f;
    scanf("%f", &sum);
    NDS = sum * proc;
    Final = sum + NDS;
    setlocale(LC_ALL, "RU");

    printf("НДС: %.2f руб.\n", NDS);
    printf("Итого: %.2f руб.\n", Final);
    return 0;
}