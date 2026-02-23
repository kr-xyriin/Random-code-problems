/*Write a function to compute the greatest common divisor of two given numbers*/

#include<stdio.h>

int gcd(int x, int y);
int min(int a, int b);

int main() {
    int num1, num2;
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Greatest common divisor of the given numbers is: %d", gcd(num1, num2));
    return 0;
}

int gcd(int x, int y) {
    int n1, n2, g;
    for (int i=1; i<=min(x,y); i++) {
        if (x%i==0 && y%i==0) {
            g=i;
        }
    }
    return g;
}

int min(int a, int b) {
    if (a>=b) {
        return b;
    }
    else {
        return a;
    }
}