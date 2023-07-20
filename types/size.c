#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <locale.h>
#include <math.h>

int main (void) {
    // Подключаем русский язык
    setlocale(LC_ALL, "ru-RU");

    // Базовые типы
    printf("Вывод базовых типов данных:\n");
    char c = 'A';
    int i = 999;
    float f = 9.0;
    double d = 1.0;
    printf("%c %i %f %f\n", c, i, f, d);

    // Вывод диапозона значений для разных типов данных путем констант из файла limits.h
    printf("\nДиапозоны:\n");
    printf("signed int от %i до %i\n", INT_MIN, INT_MAX);
    printf("unsigned int от 0 до %u\n", UINT_MAX);
    printf("signed short int от %i до %i\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int от 0 до %u\n", USHRT_MAX);
    printf("signed long int от %i до %i\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int от 0 до %u\n", ULONG_MAX);
    printf("signed char int от %i до %i\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char int от 0 до %u\n", UCHAR_MAX);

    // Вывод диапозона значений для разных типов данных путем вычисления
    printf("\nВычисляемые диапозоны:\n");
    printf("signed int от %.0f до %.0f\n", -pow(2, sizeof(int) * 8) / 2, pow(2, sizeof(int) * 8) / 2 - 1);
    printf("unsigned int от 0 до %.0f\n", pow(2, sizeof(int) * 8) - 1);
    printf("signed short int от %.0f до %.0f\n", -pow(2, sizeof(short) * 8) / 2, pow(2, sizeof(short) * 8) / 2 - 1);
    printf("unsigned short int от 0 до %.0f\n", pow(2, sizeof(short) * 8) - 1);
    printf("signed long int от %.0f до %.0f\n", -pow(2, sizeof(long) * 8) / 2, pow(2, sizeof(long) * 8) / 2 - 1);
    printf("unsigned long int от 0 до %.0f\n", pow(2, sizeof(long) * 8) - 1);
    printf("signed char int от %.0f до %.0f\n", -pow(2, sizeof(char) * 8) / 2, pow(2, sizeof(char) * 8) / 2 - 1);
    printf("unsigned char int от 0 до %.0f\n", pow(2, sizeof(char) * 8) - 1);

    return 0;
}