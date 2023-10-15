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

int* findSubArr(int* mainArr, size_t mainLen, int* subArr, size_t subLen) {
    for (size_t i = 0; i < mainLen; i++) {
        size_t j = 0;
        int *addr = &(mainArr[i]);
        while (i + j < mainLen && mainArr[i + j] == subArr[j] && j < subLen) {
            if (j == subLen - 1 && mainArr[i + j] == subArr[j]) return addr;
            j++;
        }

    }
    return NULL;
}

int main() {
    size_t mainLen = 10;
    int* mainArr = initializeArr(mainLen);
    printArr(mainArr, mainLen);

    size_t subLen = 3;
    int* subArr;
    allocateThat(&subArr, 3);
    for (size_t i = 0; i < subLen; i++) subArr[i] = i + 1;
    printArr(subArr, subLen);

    printf("%p\n", findSubArr(mainArr, mainLen, subArr, subLen));


}