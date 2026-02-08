// Square of a number using functions
// Call by Value

#include <stdio.h>

int square(int i);

int main() {
    int num = 5;
    printf("Square: %d", square(num));
    return 0;
}

int square(int i) {
    return i*i;
}