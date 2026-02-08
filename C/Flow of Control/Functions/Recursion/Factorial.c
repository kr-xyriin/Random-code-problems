// Factorial od a number using recursion

#include <stdio.h>

int fact(int count);

int main() {
    printf("%d", fact(5));
    return 0;
}

int fact(int count) {
    if (count == 0) {
        return 1;
    }
    int n=fact(count-1);
    int fact=n*count;
    return fact;
}