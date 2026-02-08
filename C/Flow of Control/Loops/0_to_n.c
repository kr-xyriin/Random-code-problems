// Print numbers from 0 to n

#include <stdio.h>
int main() {
    int n, count=1;
    printf("Enter the limit: ");
    scanf("%d", &n);
    while (count<=n) {
        printf("%d\n", count);
        count++;
    }
    return 0;
}