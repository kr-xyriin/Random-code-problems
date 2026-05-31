#include <stdio.h>

void display(int arr[], int size) {
    for (int r=0; r<size; r++) printf("%d ", arr[r]);
    printf("\n");
    return;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10}, n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    for (int i=0, j=n-1; i<j; i++, j--) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    display(arr, n);
    return 0;
}