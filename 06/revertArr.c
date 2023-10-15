#include <stdio.h>
void revertArr(int* arr, size_t len) {
    int arrtmp[len];
    for (size_t i = 0; i < len; i++) {
        arrtmp[i] = arr[i];
    }
    for (size_t i = 0; i < len; i++) {
        arr[i] = arrtmp[len-i-1];
    }
}