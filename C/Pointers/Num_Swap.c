#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int c;
    printf("Before swap: %d %d\n", a, b);
    //int *a1 = &a, *a2 = &b, *a3;
    // *a3=*a2;
    // *a1=*a2;
    // *a2=*a1;
    c=*(&a);
    a=*(&b);
    b=*(&c);
    printf("After swap: %d %d", a, b);
    return 0;
}