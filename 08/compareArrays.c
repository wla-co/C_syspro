#include <stdio.h>
int isEqualArrays(int* arr1, size_t len1, int* arr2, size_t len2) {
    if (len1 == len2) {
        for (size_t i = 0; i < len1; i++) {
            if (arr1[i] != arr2[i])
                return 0;
        }
        return 1;
    }
    return 0;
}
int arr1IsLess(int* arr1, size_t len1, int* arr2, size_t len2) {
    if (len1 == len2) {
        for (size_t i = 0; i < len1; i++) {
            if (arr1[i] > arr2[i])
                return 0;
            if (arr1[i] < arr2[i])
                return 1;
        }
        return 0;
    } else if (len1 < len2) {
        for (size_t i = 0; i < len1; i++) {
            if (arr1[i] > arr2[i])
                return 0;
            if (arr1[i] < arr2[i])
                return 1;
        }
        return 1;
    } else if (len1 > len2) {
        for (size_t i = 0; i < len2; i++) {
            if (arr1[i] > arr2[i])
                return 0;
            if (arr1[i] < arr2[i])
                return 1;
        }
        return 0;
    }
}

int compareArrays(int* arr1, size_t len1, int* arr2, size_t len2) {
    if (isEqualArrays(arr1, len1, arr2, len2))
        return 0;
    else
        if (arr1IsLess(arr1, len1, arr2, len2))
            return -1;
        else
            return 1;
}