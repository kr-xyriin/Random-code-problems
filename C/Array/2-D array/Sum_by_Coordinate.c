// Given a matrix 'a' of dimension n x m and 2 coordinates (11, rl) and (12, r2). Return the sum of the rectangle from (11,r1) to (12, r2).

#include <stdio.h>

int main() {
    int arr[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}, sum=0, r1=0, c1=2, r2=2, c2=4;
    printf("Printing the sum of elements for the below printed array...\n");
    for (int i=r1; i<+r2; i++) {
        for (int j=c1; j<=c2; j++) {
            printf("%d ", arr[i][j]);
            sum+=arr[i][j];
        }
        printf("\n");
    }
    printf("Sum: %d", sum);
    return 0;
}