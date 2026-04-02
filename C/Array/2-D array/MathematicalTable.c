// Creates a matheatical table on arrau

#include <stdio.h>

int main() {
    int num, r, c=2;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("\nMathematical table for %d:\n\n", num);
    int counter=0;
    int arr[r][c];
    for (int i=0; i<r; i++) {
        counter+=num;
        for (int j=0; j<2; j++) {
            if (j==0) arr[i][j]=i+1;
            if (j==1) arr[i][j]=counter;
        }
    }
    for (int i=0; i<r; i++) {
        for (int j=0; j<2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}