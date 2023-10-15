#include <stdio.h>
#include <assert.h>

int is_divisor(int x, int divisor) {
    assert(x > 0);
    assert(divisor >= 2);
    assert(divisor <= (x / 2));
    if ((x % divisor) == 0)
        return 1;
    else
        return 0;
}

void printDivisors(int x) {
    assert(x > 0);
    for (int i = 2; i <= (x / 2); i++) {
        if (is_divisor(x, i))
            printf("%d\n", i);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0)
        printf("Number must be more than 0\n");
    else
        printf("There is it's divisors:\n");
        printDivisors(n);
}