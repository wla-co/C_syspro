#include <stdio.h>

/*
 * Задание №1: fizz buzz

Прочитать значение N типа unsigned long. Вывести через пробел все числа от 0 до N,
 заменяя некоторые числа на строки по следующим правилам:
1. Если число делится без остатка на 3, вывести строку fizz
2. Если число делится без остатка на 5, вывести строку buzz
3. Если число делится без остатка на 3 и на 5, вывести строку fizz buzz

 */

void f1_fizzbuzz() {

    unsigned long n;
    scanf("%lu", &n);

    for (unsigned long i = 0; i <= n; i++) {

        if ((i % 3 == 0) && (i % 5 == 0)) {
            printf("fizz buzz\n");
        } else if (i % 3 == 0) {
            printf("fizz\n");
        } else if (i % 5 == 0) {
            printf("buzz\n");
        } else {
            printf("%lu\n", i);
        }
    }
}