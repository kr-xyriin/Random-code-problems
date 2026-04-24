// Given an array of i with 1 to n elements and the size of the array if n+1. One element is occurring more than once i.e duplicate number is present. Find the duplicate element.

#include <stdio.h>
#include <limits.h>

int main() {
    
    // brute force method
    int arr[10]={1,2,3,4,5,2,7,8,5,9}, flag=INT_MIN;
    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++) {
            if (arr[i]==arr[j]) {
                printf("Element found: %d\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}