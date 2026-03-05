// calculates a raised to power b uskng recursion

#include <stdio.h>

int power(int n1, int n2);

int main() {
    int x, y;
    printf("Enter number: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d", &y);
    printf("%d raised to the power %d: %d", x, y, power(x, y));
    return 0;
}

int power(int n1, int n2) {
    if (n2==0) {
        return 1;
    }
    return n1*power(n1, n2-1);
}