// Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

void f3();

int main(void) {
    f3();
    return 0;
}

void f3(void) {
    {
        int z = 100; // Variable declared inside a block
        printf("Inside block: %d\n", z); // Accessing variable inside the block
    }
    // printf("Outside block: %d\n", z); // Uncommenting this line would cause a compilation error since z is not defined here
}