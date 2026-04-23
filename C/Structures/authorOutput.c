#include <stdio.h>

typedef struct book{
    char name[25];
    char author[25];
    int callno;
} book;

void display(book *);

int main() {
    book b1={"Let us C", "YPK", 101};
    book *p1=&b1;
    display(&b1);
    return 0;
}

void display(book *b1) {
    printf("%s | %s | %d", (*b1).name, b1->author, b1->callno);
}