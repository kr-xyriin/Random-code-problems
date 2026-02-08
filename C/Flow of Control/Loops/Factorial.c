// Fatorial of a number

#include <stdio.h>
int main() {
    int n, counter=1, fact=1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n<0) {
        printf("Invalid input!");
    } else if (n==0) {
        printf("Factorial of 0: 1");
    } else {
        while (counter<=n) {
            fact=fact*counter;
            counter++;
        }
        printf("Factorial of %d: %d\n\n", n, fact);
    }
    return 0;
}