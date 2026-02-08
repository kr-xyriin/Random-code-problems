// Print prime numbers in a range

#include <stdio.h>
int main() {
    int l1, l2, first=1;
    printf("Enter the lower and upper limits of the range: ");
    scanf("%d %d", &l1, &l2);
    printf("[");
    for (int i=l1; i<=l2; i++) {
        int flag=1;
        if (i!=1) {
            for (int j=2; j<=i/2; j++) {
                if (i%j==0) {
                    flag=0;
                    break;
                }
            } if (flag==1) {
                if (!first) {
                    printf(", ");
                } printf("%d", i);
                first=0;
            }
        }
    } printf("]\n\n");
    return 0;
}