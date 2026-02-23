#include<stdio.h>
int main() {
    int a=25;
    int *x=&a;
    int **y=&x;

    // prints the value of a
    printf("%d\n", a);

    // prints the address of a using pointer x
    printf("%d\n", x);

    // prints the address of a using variable
    printf("%d\n", &a);

    // prints the value at x using dereferencing
    printf("%d\n", *x);

    // prints the ddress of x using variable
    printf("%d\n", &x);

    // prints the address of x using pointer y
    printf("%d\n", y);

    // prints the value of a using double dereferencing
    printf("%d\n", **y);

    // prints the address of a using single dereferencing
    // basically: *y=x=&a | **y=*x=a
    printf("%d\n", *y);

}