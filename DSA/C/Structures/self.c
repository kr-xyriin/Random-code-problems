#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct abc{
    int i;
    char c;
    struct abc *ptr;
} abc;

int main() {
    abc tester1={1, 'A', NULL};
    abc tester2={2, 'B', NULL};
    tester1.ptr=&tester2;
    printf("%d ", (*(tester1.ptr)).i);
    printf("%c\n", tester1.ptr->c);
    return 0;
}