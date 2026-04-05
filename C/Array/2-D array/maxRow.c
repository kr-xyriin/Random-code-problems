// Write a program to print the row number having the maximum sum in a given matrix.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}, index, max=INT_MIN;
    for (int i=0; i<3; i++) {
        int sum=0;
        for (int j=0; j<5; j++) {
            sum+=arr[i][j];
        }
        if (max<sum) {
            max=sum;
            index=i;
        }
    }
    printf("The row with highest sum is: %d [INDEX]\n", index);
    printf("[ ");
    for (int j=0; j<5; j++) {
        printf("%d ", arr[index][j]);
    }
    printf("]");
    return 0;
}