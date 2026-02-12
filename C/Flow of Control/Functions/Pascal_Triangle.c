// 1
// 1 1 
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

#include<stdio.h>

int comb(int row, int column);
int fact(int num);

int main() {
    printf("Enter number of rows: ");
    int rows, columns;
    scanf("%d", &rows);
    columns=rows;
    printf("\n\nPascal's Trwiangle: \n\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<=i; j++) {
            printf("%d ", comb(i, j));
        }
        printf("\n");
    }
}

int fact(int num) {
    int factorial=1;
    for (int i=num; i>0; i--) {
        factorial*=i;
    }
    return factorial;
}

int comb(int row, int column) {
    int r, c1, c2, combination;
    r=fact(row);
    c1=fact(column);
    c2=fact(row-column);
    combination=r/(c1*c2);
    return combination;
}