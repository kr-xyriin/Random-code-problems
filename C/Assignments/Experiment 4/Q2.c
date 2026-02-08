// Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>

void f2();

int main(void) {
    f2();
    return 0;
}

void f2(void) {
    int y = 42; // Local variable
    printf("%d\n", y); // Accessing local variable inside the function
    // printf("%d\n", x); // Uncommenting this line would cause a compilation error since x is not defined here
}