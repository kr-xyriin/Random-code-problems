// Print all odd numbers from a to b

#include <stdio.h>
int main() {
    int l1, l2;
    printf("Enter lower and upper limits respectively: ");
    scanf("%d %d", &l1, &l2);
    printf("[");
    for (int i=l1; i<=l2; i++) {
        if (i%2==1) {
            if (i<l2-1) {
                printf("%d, ", i);
            } else {printf("%d]", i);}
        }
    }
    return 0;
}