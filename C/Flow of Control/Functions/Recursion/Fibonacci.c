// Recursive function to print fibonacci series

#include <stdio.h>

int fibo(int n);

int main() {
    int n;
    printf("Enter the length of the series: ");
    scanf("%d", &n);
    printf("[");
    for (int i=0; i<=n; i++) {
        printf(" %d", fibo(i));
    } printf(" ]\n");
    printf("n'th Term: %d", fibo(n));
    return 0;
}

int fibo(int n) {
    if (n==0) {
        return 0;
    }
    else if (n==1) {
        return 1;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}