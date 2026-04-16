#include <stdio.h>

int main() {
    struct book{
        char name[50];
        float price;
        int numberofPages;
    } a, b, c;

    a.numberofPages=100;
    a.price=411.5;

    return 0;
}