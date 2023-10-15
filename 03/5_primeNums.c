#include <stdio.h>
#include <assert.h>

/*
 * Задание №5: простые числа

Прочитать значение N типа unsigned long long.
 Если N меньше 2, вывести сообщение об ошибке.
 Иначе вывести все простые числа в диапазоне от 2 до N.

 */
int isPrime(unsigned long long x);        // объявляю функцию, которую описал в 4 (прошлом) задании

void primeNums(unsigned long long n) {
    assert(n >= 2);

    for (unsigned long long i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%llu ", i);
        }
    }
}

void f5_primeNums() {                  // исполняемая
    unsigned long long N;
    scanf("%llu", &N);

    if (N < 2) {
        printf("Error!\n");
    } else {
        primeNums(N);
    }
}