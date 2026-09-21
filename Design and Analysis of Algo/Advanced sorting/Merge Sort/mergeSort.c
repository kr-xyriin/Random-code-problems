#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

void display(int arr[], int size) {
    printf("[ ");
    for (int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("]");
    printf("\n");
    return;
}

void merger(int arr[], int si, int mi, int ei) {
    int s1=mi-si+1, s2=ei-mi;
    
    int arr1[s1], arr2[s2];
    for (int p=0; p<s1; p++) {
        arr1[p]=arr[si+p];
    }

    for (int q=0; q<s2; q++) {
        arr2[q]=arr[mi+q+1];
    }

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

int main() {
    int arr[]={3,8,1,-9,-4,2,0,-4,-1,5}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    printf("\n");
    mergeSort(arr, 0, n-1);
    display(arr, n);
    return 0;
}