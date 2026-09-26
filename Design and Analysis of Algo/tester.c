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
    printf("]\n");
    return;
}

void selectionSort() {
    int arr[]={7,2,0,-1,-4,8,-3,4,9}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);

    for (int i=0; i<n-1; i++) {
        int min=arr[i], index=i;
        for (int j=i; j<n; j++) {
            if (min>arr[j]) {
                min=arr[j];
                index=j;
            }
        }
        swap(&arr[i], &arr[index]);
    }
    
    printf("\n");
    display(arr, n);
    return;
}

void insertionSort() {
    int arr[]={7,2,0,-1,-4,8,-3,4,9}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);

    for (int i=1; i<n; i++) {
        int j=i;
        while (j>0 && arr[j]<arr[j-1]) {
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }

    printf("\n");
    display(arr, n);
}

void merger(int arr[], int si, int mi, int ei) {
    int s1=mi-si+1, s2=ei-mi;

    int arr1[s1], arr2[s2];
    for (int p=0; p<s1; p++) arr1[p]=arr[p+si];
    for (int q=0; q<s2; q++) arr2[q]=arr[q+mi+1];

    int i=0, j=0, k=si;
    while (i<s1 && j<s2) {
        if (arr1[i]<=arr2[j]) {
            arr[k]=arr1[i];
            i++;
            k++;
        } else {
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }

    while (i<s1) {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while (j<s2) {
        arr[k]=arr2[j];
        j++;
        k++;
    }
    return;
}

void mergeSort(int arr[], int si, int ei) {
    if (si<ei) {
        int mi=(si+ei)/2;
        mergeSort(arr, si, mi);
        mergeSort(arr, mi+1, ei);
        merger(arr, si, mi, ei);
    }
    return;
}

int partition(int arr[], int si, int ei) {
    int piv=arr[ei];
    int i=si-1;
    for (int j=si; j<=ei; j++) {
        if (arr[j]<=piv) {
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    return i;
}

void quickSort(int arr[], int si, int ei) {
    if (si<ei) {
        int piv=partition(arr, si, ei);
        quickSort(arr, si, piv-1);
        quickSort(arr, piv+1, ei);
    }
    return;
}

int main() {
    selectionSort();
    printf("\n\n");

    insertionSort();
    printf("\n\n");

    int arr[]={7,2,0,-1,-4,8,-3,4,9}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    //  mergeSort(arr, 0, n-1);
    quickSort(arr, 0, n-1);
    display(arr, n);
    return 0;
}