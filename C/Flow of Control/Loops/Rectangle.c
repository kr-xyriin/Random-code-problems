// Rectangle

#include <stdio.h>
int main() {
    int len, bre;
    printf("Enter legth and breadth of rectangle: ");
    scanf("%d %d", &len, &bre);
    for (int i=1; i<=bre; i++) {
        for (int j=1; j<=len; j++) {
            printf(" *");
        } printf("\n");
    }
    return 0;
}