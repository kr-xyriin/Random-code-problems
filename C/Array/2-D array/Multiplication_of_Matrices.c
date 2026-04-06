// Porgram to multiply two matrices

#include <stdio.h>

int main() {int r1, c1, r2, c2;
    printf("Enter no. of rows for matrix 1: ");
    scanf("%d", &r1);
    printf("Enter no. of coluns for matrix 1: ");
    scanf("%d", &c1);
    printf("Enter no. of rows for matrix 2: ");
    scanf("%d", &r2);
    printf("Enter no. of coluns for matrix 2: ");
    scanf("%d", &c2);
    printf("\n");
    if (c1!=r2) printf("Invalid matrices used!!\n\t...Terminating the program");
    else {
        int arr1[r1][c1], arr2[r2][c2], arr3[r1][c2];

        printf("\nEnter data for matrix 1 [row by row]: ");
        for (int i=0; i<r1; i++) {
            for (int j=0; j<c1; j++) {
                scanf("%d", arr1[i][j]);
            }
        }

        printf("\nEnter data for matrix 2 [row by row]: ");
        for (int i=0; i<r2; i++) {
            for (int j=0; j<c2; j++) {
                scanf("%d", arr2[i][j]);
            }
        }

        // for (int i=0; i<2; i++) {
        //     for (int j=0; j<3; j++) {
        //         printf("%d ", arr1[i][j]);
        //     }
        //     printf("\n");
        // }
        // printf("\n");
        // for (int i=0; i<3; i++) {
        //     for (int j=0; j<1; j++) {
        //         printf("%d ", arr2[i][j]);
        //     }
        //     printf("\n");
        // }
        for (int i=0; i<r1; i++) {
            for (int j=0; j<c2; j++) {
                arr3[i][j]=0;
                for (int k=0; k<c1; k++) {
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        printf("\nPrinting the Multiplied matrix: \n");
        for (int i=0; i<r1; i++) {
            for (int j=0; j<c2; j++) {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}