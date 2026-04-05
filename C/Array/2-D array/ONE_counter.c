// Given a matrix having 0-1 only, find the row with the maximum number of 1's

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[3][5]={1,0,1,1,1,1,0,0,1,1,0,1,0,0,1}, max=INT_MIN, index, counter;
    for (int i=0; i<3; i++) {
        int count=0;
        for (int j=0; j<5; j++) {
            if (arr[i][j]==1) count++;
        }
        if (max<count) {
            max=count;
            index=i;
            counter=count;
        }
    }
    printf("The row with highest count is: %d [INDEX]\nTotal count: %d\n", index, counter);
    printf("[ ");
    for (int j=0; j<5; j++) {
        printf("%d ", arr[index][j]);
    }
    printf("]");
    return 0;
}