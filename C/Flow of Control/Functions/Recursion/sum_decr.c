// print sum of n to 1 

#include<stdio.h>

void sum(int s, int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum(0, num);
    return 0;
}

void sum(int s, int n) {
    if (n==0) {
        printf("\n%d\n", s);
        return;
    }
    printf("%d\n", n);
    sum(s+n, n-1);
    return;
}