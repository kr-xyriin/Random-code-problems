#include <stdio.h>
int main() {
    int n;
    printf("Enter step value: ");
    scanf("%d", &n);
    if (n%2==0) {
        printf("You entered an even step value!!\nThis program will use the next odd value to given value\n");
        n++;
        printf("\n");
    } for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i==n/2+1 || j==n/2+1) {
                printf("* ");
            } else { printf("  ");}
        } printf("\n");
    } printf("\n"); return 0;
}