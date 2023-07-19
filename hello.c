#include <stdio.h>
#include <string.h>

char* encode(char s[], int s_size, int key) {
   // Создаем новую строку
   char sf[s_size];
   strcpy(sf, s);

   // Используем алгоритм цезаря
   for (int i = 0; i < s_size; i++) {
      if (sf[i] >= 97 && sf[i] <= 122) {
         sf[i] = sf[i] + key;
      }
   }

   return sf;
}

int main () {
   // 97 - 122
   char s[] = "abcdef";
   int s_size = sizeof(s) / sizeof(s[0]);
   printf("%s - %s", s, encode(s, s_size, 1));
   return 0;
}

