// Sum of n natural numbers

#include <stdio.h>
int n, sum=0;
int main() {
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        sum+=i;
    } printf("SUM: %d", sum);
    return 0;
}