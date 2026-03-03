#include<stdio.h>

void dec2inc(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    dec2inc(num);
    return 0;
}

void dec2inc(int n) {
    if (n==0) {
        return;
    }
    printf("%d\n", n);
    dec2inc(n-1);
    printf("%d\n", n);
    return;
}