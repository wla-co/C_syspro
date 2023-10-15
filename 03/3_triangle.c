#include <stdio.h>

void triangle() {
    unsigned long item = 0;
    unsigned long strnum = 1;

    unsigned long N;
    scanf("%lu", &N);

    while (item <= (N*(N+1))/2-1) {
        for (unsigned long i = 0; i < strnum; i++) {
            printf("%lu ", item);
            item++;
        }
        printf("\n");
        strnum++;
    }
}