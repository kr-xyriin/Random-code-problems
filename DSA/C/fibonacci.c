#include <stdio.h>

void fibonacci(int num1, int num2, int count);

int main() {
    int num1=0, num2=1, count=2;
    printf("%d\n%d\n", num1, num2, count);
    fibonacci(num1, num2, count);
    return 0;
}

void fibonacci(int num1, int num2, int count) {
    if (count<20) {
        int fibo=num1+num2;
        printf("%d\n", fibo);
        num1=num2;
        num2=fibo;
        count++;
        fibonacci(num1, num2, count);
    }
    return;
}