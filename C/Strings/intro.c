#include <stdio.h>

int main() {
    char arr[6]={'a','A','b','c','d','e'};
    int arr1[4]={1,2,3,4};
    for (int i=0; i<4; i++) printf("%p\n",&arr1[i]);
    printf("%c\n", arr[2]);
    for (int i=0; i<6; i++) printf("%p\n", &arr[i]);
    return 0;
}