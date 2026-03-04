// Print sum from 1 to n

#include<stdio.h>

void sum1(int s, int n);
int sum2(int count);

int main() {
    int num;
    printf("Enter limit: ");
    scanf("%d", &num);
    sum1(0, num);
    printf("\n%d\n", sum2(num));
    return 0;
}

void sum1(int s, int n) {
    if (n==0) {
        printf("Sum: %d\n", s);
        return;
    }
    sum1(s+n, n-1);
    printf("%d\n", n);
    return;
}

int sum2(int count) {
    if (count==1) {
        return 1;
    }
    return count+sum2(count-1);
}