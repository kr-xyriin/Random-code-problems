#include <stdio.h>

int main() {
    int x=10;
    int *ptr1=NULL;
    int *ptr2=0;
    printf("%d\n%d\n", *ptr1, *ptr2);
    void *ptr3=NULL;
    printf("%d\n", *(int*)ptr3);
    return 0;
}