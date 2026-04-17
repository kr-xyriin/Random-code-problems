#include <stdio.h>
#include <string.h>

int main() {
    struct book{
        char name[50];
        float price;
        int numberofPages;
    } a, b, c;

    a.numberofPages=100;
    a.price=411.5;
    strcpy(a.name, "Secret Seven");

    printf("%d\n", a.numberofPages);
    printf("%.2f\n", a.price);
    printf("%s\n", a.name);

    b.numberofPages=200;
    b.price=100.4;
    strcpy(b.name, "Famous five");

    printf("%d\n", b.numberofPages);
    printf("%.2f\n", b.price);
    printf("%s\n", b.name);

    return 0;
}