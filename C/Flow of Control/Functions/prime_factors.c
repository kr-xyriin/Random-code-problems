/*A positive integer is entered through the keyboard.
Write a function to obtain the prime factors of this number.*/
#include<stdio.h>
#include<math.h>

int prime(int x);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("[");
    for (int i=2; i<=n/2; i++) {
        if (n%i==0) {
            if (prime(i)) {
                while (n%i==0) {
                    printf("%d, ", i);
                    n/=i;
                }
            }
        }
    }
    if (n>1) {
        printf("%d]", n);
    }
}
    // Alter

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int n1=n;
//     for (int i=2; i<=n1/2; i++) {
//         if (n%i==0) {
//             if (prime(i)) {
//                 while (n%i==0) {
//                     printf("%d ", i);
//                     n/=i;
//                 }
//             }
//         }
//     }
// }

int prime(int x) {
    if (x<2) {
        return 0;
    }
    for (int i=2; i<=x/2; i++) {
        if (x%i==0) {
            return 0;
        }
    }
    return 1;
}