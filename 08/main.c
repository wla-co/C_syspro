#include <stdio.h>
#include <stdlib.h>

int* scanArr(size_t* retPlaceForSize);
void printArr(int* arr, size_t len);
void revertArr(int* arr, size_t len);
int maxInArr(int* arr, size_t len);
int findInArr(int* arr, size_t len, int x);
void extractDigits(int* arr, size_t len, int X);
int compareArrays(int* arr1, size_t len1, int* arr2, size_t len2);

void nullCheck(void* ptr) {
    if (ptr == NULL) {
        printf("Error! Out of memory!\n");
        exit(0);
    }
}

int main() {

    size_t size;

    printf("Scan array:\n");
    int* Arr = scanArr(&size);
    printf("Print array:\n");
    printArr(Arr, size);

    printf("Reverted array output: \n");
    revertArr(Arr, size);
    printArr(Arr, size);

    printf("Max in array: %d \n", maxInArr(Arr, size));

    printf("Find in array: ");
    int x;
    scanf("%d", &x);
    printf("It's address: %p \n\n", findInArr(Arr, size, x));

    size_t j;
    printf("Scan new array (length must be more than 10): \n");
    int* Arr2 = scanArr(&j);
    if (j <= 10) {
        printf("Length must be more than 10!!! die \n");
        exit(0);
    }

    printf("What digits to extract: ");
    int digits;
    scanf("%d", &digits);

    extractDigits(Arr2, j, digits);

    printf("Array after extracting digits: \n");
    printArr(Arr2, j);

    printf("Then we compare Arr and Arr2: \n");
    printf("%d \n", compareArrays(Arr, size, Arr2, j));
    return 0;
}