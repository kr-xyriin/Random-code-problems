#include <stdio.h>

unsigned long long int powerfn(int x, int y);

int main() {
    int num, power;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &power);
    printf("%d raised to the power %d: %llu\n", num, power, powerfn(num, power));
    return 0;
}

unsigned long long int powerfn(int x, int y) {
    if (y==1) return x;
    if (y==0) return 1;
    unsigned long long int ans=powerfn(x,y/2);
    if (y%2!=0) return ans*ans*x;
    return ans*ans;
}