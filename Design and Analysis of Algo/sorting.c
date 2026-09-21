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

void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}

void bubbleSort() {
    printf("Bubble Sort: \n");
    int arr[]={6,5,4,7,3,9,1,0,-6,-2}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    printf("\n");

    for (int i=0; i<n-1; i++) {
        bool swapped=false;
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped=true;
            }
        }
        if (!swapped) break;
    }

    display(arr, n);
    printf("\n\n");
}

void selectionSort() {
    printf("Selection Sort: \n");
    int arr[]={6,5,4,7,3,9,1,0,-6,-2}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    printf("\n");

    for (int i=0; i<n-1; i++) {
        int min=INT_MAX, index;
        for (int j=i; j<n; j++) {
            if (min>arr[j]) {
                min=arr[j];
                index=j;
            }
        }
        swap(&arr[i], &arr[index]);
    }

    display(arr, n);
    printf("\n\n");
}

void insertionSort() {
    printf("Insertion Sort: \n");
    int arr[]={6,5,4,7,3,9,1,0,-6,-2}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    printf("\n");

    for (int i=1; i<n; i++) {       // we take arr[0] as the sorted array
        int j=i;
        while (j>0 && arr[j]<arr[j-1]) {
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }
    display(arr, n);
    printf("\n\n");
}

int main() {
    bubbleSort();
    selectionSort();
    insertionSort();
    return 0;
}