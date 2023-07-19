#include <stdio.h>

// Удаляет из первой строки все символы из второй
void squeeze(char s1[], char s2[]) {
    int c = 0;
    int isCorrectChar;
    int i;
    for (i = 0; s1[i] != '\0'; i++) {
        isCorrectChar = 1;
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s2[j] == s1[i]) {
                isCorrectChar = 0;
                break;
            }
        }
        if (isCorrectChar) {
            s1[c++] = s1[i];
        }
    }
    s1[c] = '\0';
}

int main() {
    int a = 0;
    a++; // Добавляет единицу после присваивания
    ++a; // Добавляет единицу до присваивания
    --a; // То же самое но отнимает
    a--; // То же самое но отнимает
    char s1[] = "abababgabababbababaaaabbbbahabababbababababtbababrbaf";
    char rule[] = "ab";
    printf("%s\n", s1);
    squeeze(s1, rule);
    printf("%s\n", s1);

    return 0;
}