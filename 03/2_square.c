#include <stdio.h>

/*
 * Задание №2: квадрат

Прочитать значение N типа unsigned long.

Вывести через пробелы и переводы строк все числа от 0 до N*N-1 так,
чтобы в каждой строке было одинаковое количество чисел.
*/

void f2_square() {

    unsigned long N;
    scanf("%lu", &N);

    unsigned long k = 0;
    for (unsigned long i = 0; i <= N*N-1; i++) {
        printf("%lu ", i);
        if (k != (N-1)) {
            k++;
        } else {
            printf("\n");
            k = 0;
        }
    }
}