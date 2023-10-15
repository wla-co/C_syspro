#include <stdio.h>
int* findInArr(int* arr, size_t len, int x) {
    for (size_t i = 0; i < len; i++) {
        if (arr[i] == x)
            return &arr[i];
    }
    return NULL;
}