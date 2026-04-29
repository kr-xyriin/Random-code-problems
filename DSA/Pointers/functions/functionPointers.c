#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

int *fun() {
    int x=10;
    int *ptr=&x;
    return ptr;
}

int main() {
    printf("%d", *(fun()));
    return 0;
}