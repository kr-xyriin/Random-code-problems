#include <stdio.h>
int main() {
    int n;
    printf("Enter an odd step value: ");
    scanf("%d", &n);
    if (n%2==0) {
        printf("You entered an even step value!!\nThis program will use the next odd value to given value\n");
        n++;
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i==j || i+j==n+1) {
                printf("* ");
            } else {printf("  ");}
        } printf("\n");
    } return 0;
}