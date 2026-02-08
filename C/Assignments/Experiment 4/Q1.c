// Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>
int x=24;

void f1();
int main(void) {
    f1();
    return 0;
}

void f1(void) {
    printf("%d\n", x);
}