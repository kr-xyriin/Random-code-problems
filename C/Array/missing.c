// Given an array containing elements from 1 to 100 except 1 element in this range is missing. Find the missing element
#include <stdio.h>

int main() {
    int sum=0, sumArray=0, element, arr[99];
    for (int i=1; i<=100; i++) sum+=i;
    for (int i=0; i<99; i++) sumArray+=arr[i];
    printf("Missing element is: %d", sum-sumArray);
    return 0;
}