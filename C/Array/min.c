#include <stdio.h>
#include <limits.h>

int main() {
    int arr[8]={14, 2, 11, 13, 3, 15, 8, 7}, min;
    min=INT_MAX;
    for(int i=0; i<8; i++) {
        if (min>arr[i]) min=arr[i];
    }
    printf("Minimum value of the array: %d", min);
    return 0;
}