#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct code{
    int i;
    char c;
    struct code *ptr;
} code;

int main() {
    code var1={65, 'A', NULL};
    code var2={66, 'B', NULL};
    var1.ptr=&var2;
    printf("%d | %c\n", var1.ptr->i, var1.ptr->c);
    return 0;
}