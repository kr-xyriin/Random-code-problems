#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

void display(int sArr[], int size) {
    printf("[ ");
    for (int i=0; i<size; i++) printf("%d ", sArr[i]);
    printf("]\n");
    return;
}

void linear(int sArr[], int size, int target) {
    bool flag=false;
    for (int i=0; i<size; i++) {
        if (sArr[i]==target) {
            printf("Element found at index [%d]\n", i);
            flag=true;
            break;
        }
    }
    if (flag==false) printf("Element not found!!\n");
    return;
}

void recursiveBinary(int sArr[], int si, int ei, int target) {
    if (si>ei) {
        printf("Element not found!!\n");
        return;
    }

    int mi=(ei+si)/2;
    if (sArr[mi]==target) {
        printf("Element found at index [%d]\n", mi);
        return;
    } else if (sArr[mi]>target) {
        recursiveBinary(sArr, si, mi-1, target);
    } else {
        recursiveBinary(sArr, mi+1, ei, target);
    }
    return;
}

void binary(int sArr[], int target, int size) {
    bool found=false;
    int low=0, high=size-1;
    while(high>-1 && low<=high) {
        int mid=(low+high)/2;
        if (sArr[mid]>target) high=mid;
        else if (sArr[mid]<target) low=mid+1;
        else {
            found=true;
            printf("Element found at index [%d]\n", mid);
            return;
        }
    }
    if (found==false) printf("Element not found!!\n");
    return;
}

int main() {
    int n;
    printf("Ener size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("\nInput the array: \n");
    for (int i=0; i<n; i++) {
        printf("[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    
    printf("Entered array: \n");
    display(arr, n);
    printf("\n");
    int target;
    printf("Enter target: ");
    scanf("%d", &target);
    printf("\n");

    printf("Linear Search: \n");
    linear(arr, n, target);
    printf("\n");

    printf("recursiveBinary Search: \n");
    recursiveBinary(arr, 0, n-1, target);
    printf("\n");

    printf("Binary Search: \n");
    binary(arr, target, n);
    printf("\n");
    return 0;
}