#include <stdio.h>
#include <locale.h>

// ����� ���� strlen
int strlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    // ���������� ������� ����
    setlocale(LC_ALL, "");

    // ��������� ��������
    #define BLA_BLA_STRING "Salam!"

    // ��������� ������������ � ���������� ���
    enum escapes { NEWLINE = '\n', TAB = '\t' };
    enum escapes c = NEWLINE;

    printf("������ ������ \"%s\" = %i%c", BLA_BLA_STRING, strlen(BLA_BLA_STRING), c);

    const int age = 99; // ����������� ��� age �� ���������
    // age = 100; // ������ ���� ������

    return 0;
}