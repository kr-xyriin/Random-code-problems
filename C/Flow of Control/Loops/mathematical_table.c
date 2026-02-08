// Mathematical table of a number

#include <stdio.h>
int main() {
    int n, limit;
    printf("Enter he number whose table you wannna print: ");
    scanf("%d", &n);
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (int i=1; i<=limit; i++) {
        printf("%d x %d = %d", n, i, n*i);
        printf("\n");
    }
    return 0;
}