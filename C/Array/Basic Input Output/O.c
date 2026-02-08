// Basic Input Output using Array

#include <stdio.h>
int main() {
    int arr2[3];
    int arr1[3]={1,2,3};
    //or
    printf("Input elements for array: ");
    scanf("%d %d %d", &arr2[0], &arr2[1], &arr2[2]);
    printf("V1: %d\nV2: %d\nV3: %d\n", arr1[0], arr1[1], arr1[2]);
    printf("V1: %d\nV2: %d\nV3: %d\n", arr2[0], arr2[1], arr2[2]);
    return 0;
}