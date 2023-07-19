#include <stdio.h>
#include <locale.h>

// Пишем свою strlen
int strlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    // Подключаем русский язык
    setlocale(LC_ALL, "");

    // Объявляем констату
    #define BLA_BLA_STRING "Salam!"

    // Объявляем перечисление и используем его
    enum escapes { NEWLINE = '\n', TAB = '\t' };
    enum escapes c = NEWLINE;

    printf("Длинна строки \"%s\" = %i%c", BLA_BLA_STRING, strlen(BLA_BLA_STRING), c);

    const int age = 99; // Гарантируем что age не изменится
    // age = 100; // Должна быть ошибка

    return 0;
}