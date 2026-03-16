// product of all elemets in a given array

#include <stdio.h>

int main() {
    int arr[6]={1,2,5,3,8,9}, prod=1;
    for (int i=0; i<6; i++) {
        prod*=arr[i];
    }
    printf("Product of all elements: %d\n", prod);
    return 0;
}