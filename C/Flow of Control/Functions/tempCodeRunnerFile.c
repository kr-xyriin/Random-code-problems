/*A positive integer is entered through the keyboard.
Write a function to obtain the prime factors of this number.*/
#include<stdio.h>
#include<math.h>

int prime(int x);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=2; i<=n/2; i++) {
        if (n%i==0) {
            if (prime(i)) {
                while (n%i==0) {
                    printf("%d ", i);
                    n/=i;
                }
            }
        }
    }
}

int prime(int x) {
    int counter=1;
    for (int i=2; i<=sqrt(x); i++) {
        if (x%i==0) {
            counter=0;
        }
    }
    return counter;
}