// Comparison of Pointers

#include <stdio.h>
int main() {
    int n1=28, n2=245, n3, n4, n5;
    int *ptr1=&n1, *ptr2=&n2, *ptr3=&n3, *ptr4=&n4, *ptr5=&n5;
    printf("Comparison [ptr1==ptr2]: %d\n", ptr1==ptr2);
    printf("Ptr1 > Ptr2: %d\n", ptr1>ptr2);
    ptr1=&n2;
    printf("Comparison: %d\n", ptr1==ptr2);
    return 0;
}