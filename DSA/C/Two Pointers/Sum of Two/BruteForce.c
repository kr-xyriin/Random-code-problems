// Given an array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.

#include <stdio.h>

int main() {
    int target=8, arr[]={1,2,3,4,5,8,9,13};
    int size=sizeof(arr)/4;
    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[i]+arr[j]==target) {
                printf("%d and %d\n", arr[i], arr[j]);
                break;
            }
        }
    }
    return 0;
}