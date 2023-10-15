#include <stdio.h>
void scanArr(int* arr, size_t len) {
    size_t i = 0;
    while (i < len) {
        scanf("%d", &arr[i]);
        i++;
    }
}