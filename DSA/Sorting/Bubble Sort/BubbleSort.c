#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    int arr[]={1,3,5,3,7}, passes=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int u=0; u<size; u++) printf("%d ", arr[u]);
    printf("\n");
    for (int i=0; i<size-1; i++) {      // no. of passes
        passes++;
        bool is_sorted=true;
        for (int j=0; j<size-i-1; j++) {        // parses through n-i-1 elements i.e. does not checks the already swapped elements
            if (arr[j]>arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                is_sorted=false;
            }
        }
        if (is_sorted==true) break;
    }
    for (int s=0; s<size; s++) printf("%d ", arr[s]);
    printf("\nPasses: %d", passes);
    return 0;
}