/*
Combination:
n! / r! * (n-r)!
*/

#include <stdio.h>

int factorial(int num);

int main() {
    int n, r;
    float comb;
    printf("Enter total number of items: ");
    scanf("%d", &n);
    printf("Enter number of items to be chosen: ");
    scanf("%d", &r);
    if (r<=n) {
        comb=factorial(n)/(factorial(r)*factorial(n-r));
        printf("\n%.2f", comb);
    }
}

int factorial(int num) {
    int fact=1;
    for (int i=num; i>0; i--) {
        fact*=i;
    }
    return fact;
}