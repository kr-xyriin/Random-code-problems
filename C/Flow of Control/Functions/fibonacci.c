// Function to print fibonacci series till n numbers
// 0, 1, 2, 3, 5, 8, 13,...

#include<stdio.h>

void fibonacci(int limit);

int main() {
    int l;
    printf("Enter limit: ");
    scanf("%d", &l);
    fibonacci(l);
}

void fibonacci(int limit) {
    long long int num1=0, num2=1;
    printf("%lld %lld", num1, num2);
    for (int i=1; i<=limit-2; i++) {
        int num3=num1+num2;
        printf(" %lld", num3);
        num1=num2;
        num2=num3;
    }
}