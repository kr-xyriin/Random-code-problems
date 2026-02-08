// Print numbers from 1 to n

#include <stdio.h>
int main() {
    int count=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (count<=n) {
        printf("%d ", count);
        count++;
    }
}