/*
rotate the given array by k steps, where k is non-negative

value of k can be smaller, equal, or greater than n where n is the size of the array
*/

#include <stdio.h>

void reversePart(int arr[], int si, int ei);

int main() {
    int num, k;
    printf("Enter array size: ");
    scanf("%d", &num);
    printf("Enter no. of rotations: ");
    scanf("%d", &k);
    if (k==num) {
        printf("\nRotated array same as initialized array...");
        return 0;
    }
    else if (k>num) {
        k%=num;
    }

    int arr[num];

    for (int i=0; i<num; i++) {
        printf("Enter element [%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Given array: ");
    for (int i=0; i<10; i++) printf("%d ", arr[i]);
    printf("\n");
    reversePart(arr, 0, 9);
    reversePart(arr, 0, k-1);
    reversePart(arr, k, 9);
    printf("Rotated array: ");
    for (int i=0; i<10; i++) printf("%d ", arr[i]);
    return 0;
}

void reversePart(int arr[], int si, int ei) {
    for (int i=si, j=ei; i<j; i++, j--) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}