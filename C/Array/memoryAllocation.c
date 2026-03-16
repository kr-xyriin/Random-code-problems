// print the memory address of elements of array

#include <stdio.h>

int main() {
    int arr0[5]={1,1,2,1,1};
    printf("%u\n", &arr0[0]);
    printf("%u\n", &arr0[1]);
    printf("%u\n", &arr0[2]);
    printf("%u\n", &arr0[3]);
    printf("%u\n", &arr0[4]);
    return 0;
}