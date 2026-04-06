// Porgram to multiply two matrices

#include <stdio.h>

int main() {
    int arr1[2][3]={1,2,3,4,5,6}, arr2[3][1]={1,2,3}, arr3[2][1];
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<1; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    int magic_var=3;
    for (int i=0; i<2; i++) {
        for (int j=0; j<1; j++) {
            arr3[i][j]=0;
            for (int k=0; k<magic_var; k++) {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<1; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}