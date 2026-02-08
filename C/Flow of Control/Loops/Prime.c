// Prime checker

#include <stdio.h>
int main() {
    int n, flag=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==1) {
        printf("1 is neither a prime nor a composite number");
    } else {
        for (int i=2; i<=n/2; i++) {
            if (n%i==0) {
                flag=0;
                printf("%d is a not a prime number", n);
                break;
            }
        }
        if (flag==1) {
            printf("%d is a prime number", n);
        }
    }
    return 0;
}