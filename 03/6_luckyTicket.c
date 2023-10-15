#include <stdio.h>
#include <assert.h>

/*
 * Задание №6: счастливые билеты

Прочитать два значения L и R типа unsigned long.
 Если L больше R, вывести сообщение об ошибке.
 Иначе вывести номера всех счастливых билетов в диапазоне от L до R.

 Билет называется счастливым, если его номер шестизначный,
 и сумма первых трёх цифр равна сумме последних трёх цифр.

 */
int isLucky(unsigned long x) {                          // проверка на счастливый билет
    unsigned long left, right, leftSum, rightSum;
    if ((x >= 100000) && (x <= 999999)) {
        right = x % 1000;
        left = x / 1000;

        leftSum = (left % 10) + (left / 100) + ( (left / 10) % 10);
        rightSum = (right % 10) + (right / 100) + ( (right / 10) % 10);
        if (leftSum == rightSum) {
            return 1;
        }
    }
    return 0;
}

void luckyTicket(unsigned long L, unsigned long R) {
    assert(L <= R);
    for (unsigned long i = L; i <= R; i++) {
        if (isLucky(i)) {
            printf("%lu ", i);
        }
    }
}

void f6_luckyTicket() {                         // исполняемая
    unsigned long L, R;
    scanf("%lu %lu", &L, &R);
    if (L > R) {
        printf("Error!\n");
    } else {
        luckyTicket(L, R);
    }
}