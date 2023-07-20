#include <stdio.h>
#include <Windows.h>

// Возвращает индекс элемента x в массиве a или -1 если его нет
int binsearch(int x, int a[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < a[mid]) {
            high = mid - 1;
        } else if (x > a[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }

    return -1;
}

// Выводит массив в консоль
void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%i\n", a[i]);
    }
}

int main () {
    // Меняем кодировку ввода/вывода в консоли
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a[] = {1, 5, 8, 99, 101, 120};
    int a_size = sizeof(a) / sizeof(a[0]);
    printf("Бинарный поиск элемента\n");
    printf("Выводим массив\n");
    print_array(a, a_size);
    printf("Ищем элемент 120 в массиве\n");
    printf("%i\n", binsearch(120, a, a_size));
    return 0;
}