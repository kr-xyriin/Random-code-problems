// find the maximum value out of all elements in the array

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[8]={14, 2, 11, 13, 3, 15, 8, 7}, max;
    // max=arr[0];
    max=INT_MIN; // Minimum value of int in c
    for (int i=0; i<8; i++) {
        if (max<arr[i]) {
            max=arr[i];
        }
    }
    printf("Maxiumu value of element: %d\n", max);
    return 0;
}