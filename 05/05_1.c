#include <stdio.h>

void swap(int *pa, int *pb) {
    int c = *pa;
    *pa = *pb;
    *pb = c;
}

int main() {
    int x, y;
    printf("Type x and y:       ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("x and y after swap: %d %d \n", x, y);
}
