#include <stdio.h>

// each time you start, every single time int x's address will NOT be the same
int* show() {
    int x;
    printf("%p \n", &x);
    return 0;

}
int test1() {
    show();
    return 0;
}
int test2() {
    int i = 0;
    while (i < 10) {
        i++;
    }
    show();
    return 0;
}

int main() {
    show();
    test1();
    test2();
}