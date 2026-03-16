// calculate the sum of all elements in a given array

#include <stdio.h>

int main() {
    int arr[5]={1,3,5,7,10}, sum=0;
    for (int i=0; i<5; i++) {
        sum+=arr[i];
    }
    printf("Sum of elements: %d\n", sum);
    return 0;
}