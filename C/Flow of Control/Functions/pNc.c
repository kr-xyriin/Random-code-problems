/*
Combination:
n! / r! * (n-r)!
*/

#include <stdio.h>

int factorial(int num);
void choice();

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
    printf("\n\n");
    choice();
}

int factorial(int num) {
    int fact=1;
    for (int i=num; i>0; i--) {
        fact*=i;
    }
    return fact;
}
void choice() {
    while (1) {
        int ans;
        printf("Do you want to calculate more? [1 : Yes / 0 : No]: ");
        scanf("%d", &ans);
        if (ans==1) {
            main();
        }
    }
}