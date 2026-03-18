// Arrays in a fucntion are PASS BY REFERENCE type 

#include <stdio.h>

void fun(int a[]);

int main() {
    int arr[5]={1,2,3,4,5};
    printf("Value before [arr[0]]: %d", arr[0]);
    fun(arr);
    return 0;
}

void fun(int a[]) {
    for (int i=0; i<5; i++) {
        printf("%d\n", a[i]);
    }
    a[0]=109;
    printf("Updating value of array inside function [arr[0]]: %d", a[0]);
}