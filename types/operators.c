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

// Ўестнадцатеричное число в дес€тичное
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
    // ѕодключаем русский €зык
    setlocale(LC_ALL, "");

    // ¬ыводим список високосных годов в обратном пор€дке
    for (int i = 2023; i >= 1923; i--) {
        if (visocos(i)) {
            printf("%i\n", i);
        }
    }

    // ѕреобразование типов происходит по правилу меньшее по количеству бит приводитс€ к большему
    // ћожно увидить на примере работы lower
    printf("%c to lower %c\n", 'F', lower('F'));

    // ѕеревод из 16 в 10 систему счислени€
    printf("hex %s to dec %i\n", "0xF", htol("0xF"));
    printf("hex %s to dec %i\n", "0xa", htol("0xa"));
    printf("hex %s to dec %i\n", "0x12F", htol("0x12F"));
    printf("hex %s to dec %i\n", "0x11", htol("0x11"));

    return 0;
}