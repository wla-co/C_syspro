#include <stdio.h>
#include <stdlib.h>

void nullCheck(void* ptr);

int* scanArr(size_t* retPlaceForSize) {
    int* arr = NULL;
    size_t size = 0;
    do {
        int* newArr = (int*) malloc((size + 1) * sizeof(int));
        nullCheck(newArr);
        for (size_t i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        free(arr);
        arr = newArr;
        scanf("%d", &arr[size++]);
    } while (arr[size - 1] != 0);

    *retPlaceForSize = size;
    return arr;
}