#include <stdio.h>
void printArr(int* arr, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
}