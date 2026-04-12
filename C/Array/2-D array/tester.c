#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], row[r], col[c];

    // initialize sums
    for(int i = 0; i < r; i++) row[i] = 0;
    for(int j = 0; j < c; j++) col[j] = 0;

    // input + compute in one loop
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            row[i] += a[i][j];
            col[j] += a[i][j];
        }
    }

    // display matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    // print row sums
    for(int i = 0; i < r; i++)
        printf("Row %d = %d\n", i+1, row[i]);

    // print column sums
    for(int j = 0; j < c; j++)
        printf("Col %d = %d\n", j+1, col[j]);

    return 0;
}