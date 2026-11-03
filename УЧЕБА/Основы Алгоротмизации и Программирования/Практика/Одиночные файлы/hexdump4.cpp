#include <stdio.h>

void toHex(unsigned long n) {
    char buf[17];
    int i = 16;
    buf[i] = '\0';
    do {
        int d = n & 0xF;
        buf[--i] = d < 10 ? d + '0' : d - 10 + 'A';
        n >>= 4;
    } while (n != 0);
    printf("HEX: %s\n", buf + i);
}

unsigned long fromHex(char *s) {
    unsigned long result = 0;
    char c;
    while ((c = *s++) != '\0') {
        result <<= 4;
        if (c >= '0' && c <= '9') result += c - '0';
        else if (c >= 'A' && c <= 'F') result += c - 'A' + 10;
        else if (c >= 'a' && c <= 'f') result += c - 'a' + 10;
    }
    return result;
}

int main() {
    int choice;
    printf("1. DEC -> HEX\n2. HEX -> DEC\nVybor: ");
    scanf("%d", &choice);

    if (choice == 1) {
        unsigned long num;
        printf("DEC: ");
        scanf("%lu", &num);
        toHex(num);
    } else if (choice == 2) {
        char buf[32];
        printf("HEX: ");
        scanf("%s", buf);
        printf("DEC: %lu\n", fromHex(buf));
    } else {
        printf("Nepravilnyj vvod\n");
        return 1;
    }

    printf("Gotovo!\n");
    return 0;
}
