#include <stdio.h>
#include <strings.h>

typedef float real;     // SYNTAX: typedef <old_name> <new_name>;

int main() {
    real y=10.5;
    // printf("%.2f\n", y);

    typedef struct book {
        int pages;
        char name[50];
        real price;
    } book;
    book a;
    book b;
    book c;
    book d;

    strcpy(a.name, "Striver's notes");
    a.pages=300;
    a.price=190.10;
    printf("%s\n", a.name);
    printf("%d\n", a.pages);
    printf("%.2f", a.price);
    
    return 0;
}