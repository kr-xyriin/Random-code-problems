#include <stdio.h>

void fun(int a[]);

int main() {
    int arr[5]={1,2,3,4,5};
    fun(arr);
    return 0;
}

void fun(int a[]) {
    for (int i=0; i<5; i++) {
        printf("%d\n", a[i]);
    }
}