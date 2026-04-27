#include <stdio.h>
#include <limits.h>

void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

void display(int arr[], int n);

int main() {
    int arr[]={1,2,3,4,5,6,7}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    for (int i=0; i<n-1; i++) {         // n-1 no. of passes
        int min=INT_MAX, index, max=INT_MIN;
        for (int j=i; j<n; j++) {     
            if (min>arr[j]) {
                min=arr[j];
                index=j;
            }
        }
        swap(&arr[i], &arr[index]);
    }
    display(arr, n);
    return 0;
}

void display(int arr[], int n) {
    for (int s=0; s<n; s++) {
        printf("%d ", arr[s]);
    }
    printf("\n");
}