#include <stdio.h>
#include <locale.h>
#include <string.h>

int visocos(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

// Шестнадцатеричное число в десятичное
int htol(char h[]) {
    int n = 0;
    for (int i = 2; i < strlen(h); i++) {
        if (h[i] >= '0' && h[i] <= '9') {
            n = 16 * n + (h[i] - '0');
        } else if (h[i] >= 'a' && h[i] <= 'f') {
            n = 16 * n + (h[i] - 'a' + 10);
        } else if (h[i] >= 'A' && h[i] <= 'F') {
            n = 16 * n + (h[i] - 'A' + 10);
        }
    }
    return n;
}

int main() {
    // Подключаем русский язык
    setlocale(LC_ALL, "");

    // Выводим список високосных годов в обратном порядке
    for (int i = 2023; i >= 1923; i--) {
        if (visocos(i)) {
            printf("%i\n", i);
        }
    }

    // Преобразование типов происходит по правилу меньшее по количеству бит приводится к большему
    // Можно увидить на примере работы lower
    printf("%c to lower %c\n", 'F', lower('F'));

    // Перевод из 16 в 10 систему счисления
    printf("hex %s to dec %i\n", "0xF", htol("0xF"));
    printf("hex %s to dec %i\n", "0xa", htol("0xa"));
    printf("hex %s to dec %i\n", "0x12F", htol("0x12F"));
    printf("hex %s to dec %i\n", "0x11", htol("0x11"));

    return 0;
}