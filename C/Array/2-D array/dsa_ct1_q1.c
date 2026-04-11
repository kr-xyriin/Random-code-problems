#include <stdio.h>

int main() {
    int r, c;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i=0; i<r; i++) {
        printf("Enter row %d: ", i+1);
        for (int j=0; j<c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nEntered matrix:\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // sum

    for (int i=0; i<r; i++) {
        int sumR=0;
        for (int j=0; j<c; j++) {
            sumR+=arr[i][j];
        }
        printf("Sum of row %d: %d\n",i+1, sumR);
    }
    for (int j=0; j<c; j++) {
        int sumC=0;
        for (int i=0; i<r; i++) {
            sumC+=arr[i][j];
        }
        printf("Sum column %d: %d\n", j+1, sumC);
    }
    return 0;
}