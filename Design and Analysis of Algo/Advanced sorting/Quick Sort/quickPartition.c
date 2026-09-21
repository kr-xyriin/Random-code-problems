#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}

void display(int arr[], int size) {
    printf("[ ");
    for (int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("]");
    printf("\n");
    return;
}

int partition(int arr[], int si, int ei) {
    int piv=arr[ei];
    int i=si-1;
    for (int j=si; j<=ei; j++) {
        if (arr[j]<=piv) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    return i;
}

int main() {
    int arr[]={5,3,9,2,7,0,6}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    printf("\n");
    int pivot=partition(arr, 0, n-1);
    printf("Pivot element and its index: %d -> [%d]\n", arr[pivot], pivot);
    display(arr, n);
    return 0;
}