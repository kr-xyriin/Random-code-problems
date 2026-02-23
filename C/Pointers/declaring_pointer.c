#include<stdio.h>

int main() {
    int a=5;
    int* x=&a;
    int** y=&x;
    int*** z=&y;

    //print the value of pointer x (i.e. address if a)
    printf("%p\n", x);

    //print the address of a
    printf("%d\n", &a);

    //print the address of x
    printf("%d\n", &x);

    //print the value of a using DEREFERENCING
    printf("%d\n", **y);

    //print the value of a using DEREFERENCING
    printf("%d\n", ***z);
}