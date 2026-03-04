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
    return count*fact(count-1);
}