/*
Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
*/

#include <stdio.h>

void integer(int arr[]);

int main() {
    int arr[8]={1, 2, 3, 4, 5, 6, 7, 8};
    printf("Before call: \n");
    for (int i=0; i<8; i++) {
        printf("Index: %d; Value:%d\n", i, arr[i]);
    }
    integer(arr);
    printf("\n");
    printf("After call: \n");
    for (int i=0; i<8; i++) {
        printf("Index: %d; Value:%d\n", i, arr[i]);
    }
    return 0;
}

void integer(int arr[]) {
    for (int i=0; i<8; i++) {
        if (i%2!=0) arr[i]=2*arr[i];
        else arr[i]=10+arr[i];
    }
}