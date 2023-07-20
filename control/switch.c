#include <stdio.h>
#include <Windows.h>

// Копирует текст из t в s меняя эскейп последовательности на видимые символы
char* escape(char s[], char t[]) {
    int j = 0;
    for (int i = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
            case '\t':
                s[j] = '\\';
                s[j + 1] = 't';
                j += 2;
                break;
            case '\n':
                s[j] = '\\';
                s[j + 1] = 'n';
                j += 2;
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }

    s[j + 1] = '\0';
    return s;
}

int main() {
    // Меняем кодировку ввода/вывода в консоли
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);  

    char s1[] = "\nS\talam\nKak\nti\t\t\t";
    int s1_size = sizeof(s1) / sizeof(s1[0]);
    char s2[s1_size * 2];
    printf("Исходная строка:\n");
    printf("%s\n", s1);
    printf("Строка с видимыми эскепами:\n");
    escape(s2, s1);
    printf("%s\n", s2);

    return 0;
}