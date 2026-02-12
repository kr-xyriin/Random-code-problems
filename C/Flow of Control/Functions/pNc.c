/*
Combination:
n! / r! * (n-r)!
*/

#include <stdio.h>

int comb(int n, int r);
int factorial(int num);
int permute(int n, int r);

int main() {
    int n, r;
    printf("Enter total number of items: ");
    scanf("%d", &n);
    printf("Enter number of items to be chosen: ");
    scanf("%d", &r);
    printf("\nPermutation or Cobination [1 / 2]: ");
    int choice;
    scanf("%d", &choice);
    if (choice==1) {
        printf("%d", permute(n, r));
    } else {
        printf("%d", comb(n, r));
    }
    printf("\n\n");
}

int factorial(int num) {
    int fact=1;
    for (int i=num; i>0; i--) {
        fact*=i;
    }
    return fact;
}

int comb(int n, int r) {
    int comb;
    comb=factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}

int permute(int n, int r) {
    int permute;
    permute=factorial(n)/factorial(n-r);
    return permute;
}
// void choice() {
//     while (1) {
//         int ans;
//         printf("Do you want to calculate more? [1 : Yes / 0 : No]: ");
//         scanf("%d", &ans);
//         if (ans==1) {
//             main();
//         }
//     }
// }