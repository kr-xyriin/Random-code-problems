// WAP to copy the contents of one array to another array in the reverse order

#include <stdio.h>

int main() {
    int arr0[5]={1,2,3,4,5}, arr1[5], temp;
    for (int i=4; i>=0; i--) {
        printf("%d\n", arr0[i]);
        printf("%d\n", arr0[4-i]);
        arr1[4-i]=arr0[i];
        printf("\n");
    }
    return 0;
}