#include <stdio.h>

int main() {
    int a=20;
    int *x=&a; // stores value of a i.e. 20
    int **y=&x; // stores value of a i.e. 20 & address of a [double dereferencing]
    int ***z=&y;

    printf("%d\n", a); // prints the value of a
    printf("%d\n", *x); //prints the value at the address stored in x i.e. value of a i.e. 20 [single derefencing]
    printf("%d\n", *y); // prints the value at the address stored in y i.e. address of a [single dereferencing]
    printf("%d\n", **y); // prints the value at the adress stored in y i.e. value of a i.e. 20 [double derefencing]
    printf("%d\n", *z); // prints the value stored at the address in z i.e. address of x [sinlge dereferencing]
    printf("%d\n", **z);  // prints the value stored at the address in z i.e. address of a [double dereferencing]
    printf("%d\n", ***z); // prints the value stored at the address stored in z i.e. value of a i.e. 20 [triple dereferencing]
    return 0;
}