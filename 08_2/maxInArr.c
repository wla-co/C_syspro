#include <stdio.h>
int maxInArr(int* arr, size_t len) {
    int max = arr[0];
    for (size_t i = 1; i < len; i++) {
        if (arr[i] <= max)
            continue;
        else
            max = arr[i];
    }


    return max;
}