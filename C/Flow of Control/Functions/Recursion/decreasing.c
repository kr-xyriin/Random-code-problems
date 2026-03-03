// Print numbers from n to 1 using recursion

#include<stdio.h>

void printer(int n);

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printer(num);
    return 0;
}

void printer(int n) {
    if (n==1) {
        printf("%d\n", n);
        return;
    }
    printf("%d\n", n);
    printer(n-1);
    return;
}