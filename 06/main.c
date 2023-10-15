#include <stdio.h>
#include <stdlib.h>
void scanArr(int* arr, size_t len);
void printArr(int* arr, size_t len);
void revertArr(int* arr, size_t len);
int maxInArr(int* arr, size_t len);
int findInArr(int* arr, size_t len, int x);
void extractDigits(int* arr, size_t len, int X);
int compareArrays(int* arr1, size_t len1, int* arr2, size_t len2);

int main() {
    size_t i;
    printf("Print length of an array: ");
    scanf("%lu", &i);
    int Arr[i];

    printf("Print array: \n");
    scanArr(Arr, i);

    printf("Array output: \n");
    printArr(Arr, i);

    printf("Reverted array output: \n");
    revertArr(Arr, i);
    printArr(Arr, i);

    printf("Max in array: %d \n", maxInArr(Arr, i));

    printf("Find in array: ");
    int x;
    scanf("%d", &x);
    printf("It's address: %p \n\n", findInArr(Arr, i, x));

    size_t j;
    printf("Print length of a new array (must be more than 10): ");
    scanf("%lu", &j);
    if (j <= 10) {
        printf("Length must be more than 10!!! die \n");
        exit(0);
    }
    printf("Print array: \n");
    int Arr2[j];
    scanArr(Arr2, j);

    printf("What digits to extract: ");
    int digits;
    scanf("%d", &digits);

    extractDigits(Arr2, j, digits);

    printf("Array after extracting digits: \n");
    printArr(Arr2, j);

    printf("Then we compare two arrays: \n");
    int arr1[] = {1, 2 ,3, 5, 6, 1, 2};
    int arr2[] = {0, 2 ,3, 5, 6, 1 ,2, 5};
    printf("%d \n", compareArrays(arr1, 7, arr2, 8));

    return 0;
}