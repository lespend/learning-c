#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <locale.h>
#include <math.h>

int main (void) {
    // ���������� ������� ����
    setlocale(LC_ALL, "");

    // ������� ����
    printf("����� ������� ����� ������:\n");
    char c = 'A';
    int i = 999;
    float f = 9.0;
    double d = 1.0;
    printf("%c %i %f %f\n", c, i, f, d);

    // ����� ��������� �������� ��� ������ ����� ������ ����� �������� �� ����� limits.h
    printf("\n���������:\n");
    printf("signed int �� %i �� %i\n", INT_MIN, INT_MAX);
    printf("unsigned int �� 0 �� %u\n", UINT_MAX);
    printf("signed short int �� %i �� %i\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int �� 0 �� %u\n", USHRT_MAX);
    printf("signed long int �� %i �� %i\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int �� 0 �� %u\n", ULONG_MAX);
    printf("signed char int �� %i �� %i\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char int �� 0 �� %u\n", UCHAR_MAX);

    // ����� ��������� �������� ��� ������ ����� ������ ����� ����������
    printf("\n����������� ���������:\n");
    printf("signed int �� %.0f �� %.0f\n", -pow(2, sizeof(int) * 8) / 2, pow(2, sizeof(int) * 8) / 2 - 1);
    printf("unsigned int �� 0 �� %.0f\n", pow(2, sizeof(int) * 8) - 1);
    printf("signed short int �� %.0f �� %.0f\n", -pow(2, sizeof(short) * 8) / 2, pow(2, sizeof(short) * 8) / 2 - 1);
    printf("unsigned short int �� 0 �� %.0f\n", pow(2, sizeof(short) * 8) - 1);
    printf("signed long int �� %.0f �� %.0f\n", -pow(2, sizeof(long) * 8) / 2, pow(2, sizeof(long) * 8) / 2 - 1);
    printf("unsigned long int �� 0 �� %.0f\n", pow(2, sizeof(long) * 8) - 1);
    printf("signed char int �� %.0f �� %.0f\n", -pow(2, sizeof(char) * 8) / 2, pow(2, sizeof(char) * 8) / 2 - 1);
    printf("unsigned char int �� 0 �� %.0f\n", pow(2, sizeof(char) * 8) - 1);

    return 0;
}