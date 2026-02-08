// Function to calculate Sum. Product and Average

#include <stdio.h>

void calc(int n1, int n2, int *sum, int *prod, int *avg);

int main() {
    int n1, n2, sum, prod, avg;
    n1=4, n2=2;
    calc(n1, n2, &sum, &prod, &avg);
    printf("Sum: %d\nProduct: %d\nAverage: %d", sum, prod, avg);
    return 0;
}

void calc(int n1, int n2, int *sum, int *prod, int *avg) {
    *sum=n1+n2;
    *prod=n1*n2;
    *avg=(n1 + n2)/2;
}