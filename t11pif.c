#include <stdio.h>

// Функция для определения количества разрядов числа
int getNumDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Функция для вывода таблицы умножения с выравниванием
void printMultiplicationTable(int n) {
    int maxDigits = getNumDigits(n * n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int result = i * j;
            int currentDigits = getNumDigits(result);
            for (int k = 0; k < maxDigits - currentDigits; k++) {
                printf(" ");
            }
            printf("%d ", result);
        }
        printf("\n");
    }
}

int main() {
    int number;
    printf("input n: ");
    scanf("%d", &number);
    printMultiplicationTable(number);
    return 0;
}

