#include <stdio.h>
#include <assert.h>

int isPrime(unsigned long long N) {
    assert(N >= 2);
    for (unsigned long long i = 2; i <= N/2; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printPrimeNumsBetween2andN(unsigned long long x) {
    assert(x >= 2);

    for (unsigned long long i = 2; i <= x; i++) {
        if (isPrime(i)) {
            printf("%llu ", i);
        }
    }
}

int main() {
    unsigned long long n;
    scanf("%llu", &n);

    if (n<2)
        printf("Error! Number must be >= 2\n");
    else {
        printPrimeNumsBetween2andN(n);
        printf("\n");
    }
}
