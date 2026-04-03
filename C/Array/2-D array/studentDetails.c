// Write a program to store roll number and marks obtained in PCM by n students side by side in a matrix.

#include <stdio.h>

int main() {
    int row, col=4;
    printf("Enter number of students: ");
    scanf("%d", &row);
    int arr[row][col];
    printf("\n");
    for (int i=0; i<row; i++) {
        printf("Enter details for student %d...\n", i+1);
        for (int j=0; j<col; j++) {
            if (j==0) {
                printf("Enter Roll No. of student: ");
                scanf("%d", &arr[i][j]);
            }
            if (j==1) {
                printf("Enter Marks in Physics: ");
                scanf("%d", &arr[i][j]);
            }
            if (j==2) {
                printf("Enter Marks in Chemistry: ");
                scanf("%d", &arr[i][j]);
            }
            if (j==3) {
                printf("Enter Marks in Maths: ");
                scanf("%d", &arr[i][j]);
            }
            
        }
        printf("\n");
    }
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            if (j==0) {
                printf("Roll No.: %d |", arr[i][j]);
            }
            if (j==1) {
                printf("| Marks in Physics: %d |", arr[i][j]);
            }
            if (j==2) {
                printf("| Marks in Chemistry: %d |", arr[i][j]);
            }
            if (j==3) {
                printf("| Marks in Maths: %d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}