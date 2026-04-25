#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,5,10,7,8,5,9};
    int arr_copy[11];
    for (int i=0; i<10; i++) {
        if (arr_copy[arr[i]]!=1) arr_copy[arr[i]]=1;
        else {
            printf("%d\n", arr[i]);
            break;
        }
    }
    return 0;
}