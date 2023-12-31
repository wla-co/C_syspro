#include <stdio.h>

/*
 * Задание №2: калькулятор

   Прочитать с клавиатуры два значения типа int,
сохранить их в глобальные переменные.

  Напечатать на экран результаты всех арифметических операций,
сравнений, логических и побитовых операций.

  Определить наличие числа -(2^31) в диапазоне int,
пронаблюдать поведение при переполнении и при делении на ноль.

 */

void f2_calc() {

    int x, y;
    scanf("%d %d", &x, &y);

    printf("Арифметические операции\n");
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n\n", x, y, x % y);

    printf("Операторы сравнения\n");
    printf("%d == %d = %d\n", x, y, x == y);
    printf("%d != %d = %d\n", x, y, x != y);
    printf("%d > %d = %d\n", x, y, x > y);
    printf("%d < %d = %d\n", x, y, x < y);
    printf("%d >= %d = %d\n", x, y, x >= y);
    printf("%d <= %d = %d\n\n", x, y, x <= y);

    printf("Логические операции\n");
    printf("%d && %d = %d\n", x, y, x && y);
    printf("%d || %d = %d\n", x, y, x || y);
    printf("!%d = %d\n\n", x, !x);

    printf("Логические (побитовые)\n");
    printf("%d & %d = %d\n", x, y, x & y);
    printf("%d | %d = %d\n", x, y, x | y);
    printf("%d ^ %d = %d\n", x, y, x ^ y);
    printf("~%d = %d\n\n", x, ~x);

    printf("Побитовые сдвиги\n");
    printf("%d << %d = %d\n", x, y, x << y);
    printf("%d >> %d = %d\n", x, y, x >> y);

    // Деление на 0 - проверял еще на паре.
    // В Вижуал Студио заканчивает программу со страшным кодом.
    // В ВСКод с гцц (на Линухе) пишет, что "An exception has occured", приостанавливая программу в этой точке.

    // Определить наличие числа -(2^31) в диапазоне int
    int b = -(2 << 30); // То же самое, что и -(2^31). Очевидно, почему.
    printf("%d\n", b); // Число отрицательное => все еще находится в диапазоне int

    // Для сравнения, проверим число, которое должно быть на 1 меньше, чем b. Входит ли оно в диапазон int?
    int b1 = b - 1;
    printf("%d\n",
           b1); // ОПА! Как видим, b1 уже не входит в диапазон int, так как на выходе мы видим положительное чилсо => оно вышло за границы int, переполнилось, и по кольцу вычетов стало самым максимальным положительным. Для того чтобы убедиться в этом, прибавим к этому числу единицу (оно доложно стать снова самым большим по модулю отрицательным)

    int b2 = b1 + 1;
    printf("%d\n", b2); // Убедились. Спокойной ночи!

}