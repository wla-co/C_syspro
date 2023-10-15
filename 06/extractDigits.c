#include <stdio.h>
#include <assert.h>
/*
 * extractDigits - принимающую массив целых чисел,
 * длина которого гарантированно не меньше 10, и число X.
 * Заполняющую элементы массива цифрами числа X в порядке от старшего разряда к младшему.
 * То есть, для числа 123 в элементах массива на выходе из функции должны лежать:
 * arr[0] == 1, arr[1] == 2, arr[2] == 3,
 * далее элементы должны остаться такими же, какими они были на входе в функцию.
 */
void extractDigits(int* arr, size_t len, int X) {
    assert(len > 10);

    int divisor = 1;
    while (X/divisor >= 10)
        divisor *= 10;

    for (size_t i = 0; i < len; i++) {
        if (divisor == 0)
            break;
        arr[i] = (X/divisor) % 10;
        divisor /= 10;
    }
}