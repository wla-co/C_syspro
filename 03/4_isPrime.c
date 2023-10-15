#include <stdio.h>
#include <assert.h>

/*
 * Задание №4: простота числа

Прочитать значение N типа unsigned long long.
Если N меньше 2, вывести сообщение об ошибке.
Иначе вывести, является ли это число простым.

 */

int isPrime(unsigned long long N) {
    assert(N >= 2);
    for (unsigned long long i = 2; i <= N/2; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

void f4_isPrime() {                     // исполняемая
    unsigned long long n;
    scanf("%llu", &n);

    if (n < 2) {
        printf("Error!\n");
    } else {
        int nIsPrime = isPrime(n);
        printf("%d", nIsPrime);
    }

}