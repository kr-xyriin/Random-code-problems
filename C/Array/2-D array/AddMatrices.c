// Write a program to add two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    r1=2, c1=3, r2=2, c2=3;
    int arr1[2][3]={{10, 20, 30}, {11, 21, 31}};
    int arr2[2][3]={{1, 2, 3}, {1, 2, 3}};
    if (r1==r2 && c1==c2) {
        int r3=r2, c3=c2, arr3[r3][c3];
        for (int i=0; i<r1; i++) {
            for (int j=0; j<c1; j++) {
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        for (int i=0; i<r1; i++) {
            for (int j=0; j<c1; j++) {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Invalid matrices...\n");
    return 0;
}