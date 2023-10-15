#include <stdio.h>

int x, y, z;
int x_before, y_before, z_before;

int evilScanf(int* P0, int* P1, int* P2) {
    int N0, N1, N2;
    scanf("%d %d %d", &N0, &N1, &N2);

    *P0 = N0;
    if (N0 > 0) {
        *P1 = N1;
        *P2 = N2;
    } else {
        *P1 = x_before;
        *P2 = (N0 + N1 + N2) * (y_before + z_before);
    }
    printf("%d %d %d\n", *P0, *P1, *P2);

    return 0;
}

int main() {
    printf("Запишем в глоб. переменные значения: "); // те самые значения до вызова функции evilScanf()
    scanf("%d %d %d", &x, &y, &z);
    int* P0 = &x;
    int* P1 = &y;
    int* P2 = &z; // выделим конкретное место, куда указывают указатели (в эти глоб. переменные)

    x_before = x;
    y_before = y;
    z_before = z;
    evilScanf(P0, P1, P2);
    return 0;
}