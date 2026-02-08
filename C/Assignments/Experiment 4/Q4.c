//Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void f4();

int main(void) {
    f4();
    f4();
    f4();
    return 0;
}

void f4(void) {
    static int count = 0; // Static local variable
    count++;
    printf("Function called %d times\n", count);
}