#include <stdio.h>
#include <assert.h>

/*
 * Задание №7: Pac-Man

Прочитать значение N типа unsigned int. Если N меньше 2 вывести сообщение об ошибке.
 Иначе реализовать для пользователя игру Pac-Man по следующим правилам:
1. Существует поле N на N клеток, пронумерованных от 0 до N-1.
 Оси координат направлены слева-направо и сверху-вниз.
2. В клетке с координатами (0, 0) стоит Пакман.
3. В клетке с координатами (N-1, N-1) лежит Еда.
4. Задача игрока довести Пакмана до Еды. Для этого он управляет им,
 последовательно вводя команды числами. Число 4 перемещает Пакмана на клетку влево,
 число 8 - на клетку вверх, число 6 - на клетку вправо, число 5 - на клетку вниз.
 За границы поля Пакман выйти не может, такая команда ни к чему не приводит.
5. Игра заканчивается тогда, когда Пакман достигает клетки с Едой.
 Результат игрока - количество команд (чем меньше, тем лучше).

На каждом шаге вы должны перерисовывать для игрока текущее состояние
 поля и предлагать ввод очередной команды. В случае ввода несуществующей команды,
 игра прерывается с сообщением об ошибке. В случае команды, которая ни к чему не приводит
 (попытка выйти за края поля), поле перерисовывается без изменений, но команда
 засчитывается в общий результат игрока.

 */

void drwField(unsigned int n, unsigned int pac_x, unsigned int pac_y) {     // Тут функция рисования поля
    assert(n >= 2);
    assert((0 <= pac_x) && (pac_x <= n));
    assert((0 <= pac_y) && (pac_y <= n));

    for (unsigned int y = 1; y <= n; y++) {
        for (unsigned int x = 1; x <= n; x++)
            if (x == pac_x && y == pac_y)
                printf("@");
            else if (x == n && y == n )
                printf("+");
            else
                printf(".");
        printf("\n");
    }
}

int adjust(int N, unsigned int rightBorder) {                 // тут функция того, если мы врезались в край
    if (N < 1)
        N = 1;
    if (N > rightBorder)
        N = rightBorder;
    return N;
}

int f7_pacman() {                               // Собственно, исполняемая функция
    unsigned int n;
    scanf("%u", &n);

    if (n < 2) {
        printf("Field size error\n");
        return 1;
    }
    unsigned int pac_x = 1, pac_y = 1, score = 0;

    do {
        drwField(n, pac_x, pac_y);
        unsigned int command;
        scanf("%u", &command);
        if (command == 4)
            pac_x = adjust(pac_x - 1, n);
        else if (command == 6)
            pac_x = adjust(pac_x + 1, n);
        else if (command == 5)
            pac_y = adjust(pac_y + 1, n);
        else if (command == 8)
            pac_y = adjust(pac_y - 1, n);
        else {
            printf("invalid command");
            return 1;
        }
        score += 1;
    } while (!(pac_x == n && pac_y == n));
    printf("Your score: %u\n", score);
    return 0;
}