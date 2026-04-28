#include <stdio.h>

void reverse (int arr[], int si, int ei) {
    for (si, ei; si<ei; si++, ei--) {
        int temp=arr[si];
        arr[si]=arr[ei];
        arr[ei]=temp;
    }
}

void display(int arr[], int size) {
    for (int r=0; r<size; r++) printf("%d ", arr[r]);
    printf("\n");
    return;
}

int main() {
    int size;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &size);
    int arr[size], key;
    printf("Enter the elements of the array: ");
    for (int e=0; e<size; e++) {
        scanf("%d", &arr[e]);
    }
    printf("Enter the no. of steps for rotation: ");
    scanf("%d", &key);
    if (key==size) {
        printf("Rotated array same as initialized array...\n");
        display(arr, size);
        return 0;
    }
    while (key>size) {
        key%=10;
    }

    reverse(arr, 0, size-1);
    reverse(arr, 0, key-1);
    reverse(arr, key, size-1);
    display(arr, size);
    return 0;
}
