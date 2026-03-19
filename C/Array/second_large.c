// Find the second largest element in a given array

#include <stdio.h>
#include <limits.h>


int main() {
    int arr[5]={1, 4, 4, 3, 2}, max, smax;
    max=smax=INT_MIN;
    for (int i=0; i<5; i++) {
        if (max<arr[i]) {
            smax=max;
            max=arr[i];
        } else if (smax<arr[i] && max!=arr[i]) smax=arr[i];
    }
    printf("MAX: %d\nSecond Max: %d", max, smax);
    return 0;
}