// Print hello world 5 times

#include <stdio.h>

void printer(int count);

int main() {
    printer(10);
    return 0;
}

void printer(int count) {
    if (count == 0) {
        return;
    }
    printf("%d, Hello World\n", count);
    printer(count-1);
}