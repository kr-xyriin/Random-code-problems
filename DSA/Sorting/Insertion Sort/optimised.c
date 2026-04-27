#include <stdio.h>

void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}

void display(int arr[], int size) {
    for (int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[]={1,5,4,3,2,1}, size=sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    for (int i=1; i<size; i++) {
        for (int j=0; j<i; j++) {
            if (arr[j]>arr[i]) swap(&arr[i], &arr[j]);
        }
    }
    display(arr, size);
    return 0;
}