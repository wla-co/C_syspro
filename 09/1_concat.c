#include <stdio.h>
#include <stdlib.h>

void nullCheck(void *ptr) {
    if (ptr == NULL) {
        printf("Error: out of memory\n");
        exit(0);
    }
}

void allocateThat(int **arr, size_t len) {
    *arr = malloc(sizeof(int) * len);
    nullCheck(*arr);
}

int* initializeArr(int len) {
    int* arr;
    allocateThat(&arr, len);
    for (int i = 0; i < len; i++)
        arr[i] = i;
    return arr;
}

void printArr(int *arr, int len) {
    for (size_t i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");
}

void concat(int *arr1, int len1, int *arr2, int len2, int **dstArr, int *dstLen) {
    *dstLen = len1 + len2;
    *dstArr = malloc(*dstLen);
    for (size_t i = 0; i < *dstLen; i++) {
        if (i < len1) (*dstArr)[i] = arr1[i];
        else (*dstArr)[i] = arr2[i - len1];
    }
}

int main() {
    int len1 = 5;
    int* arr1 = initializeArr(len1);
    printArr(arr1, len1);

    int len2 = 10;
    int* arr2 = initializeArr(len2);
    printArr(arr2, len2);

    int len3;
    int* arr3;
    concat(arr1, len1, arr2, len2, &arr3, &len3);
    printArr(arr3, len3);

    free(arr1);
    free(arr2);
    free(arr3);

}