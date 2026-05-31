#include <stdio.h>

int main() {
    int x=10;
    int *ptr1=NULL;
    int *ptr2=0;
    printf("%p\n%p\n", *ptr1, *ptr2);
    void *ptr3=NULL;
    printf("%u\n", *(int*)ptr3);
    return 0;
}