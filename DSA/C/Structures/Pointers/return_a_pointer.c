#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
} point;

point *entry(int x, int y) {
    point *ptr=(point*)malloc(sizeof(point));
    ptr->x=x;
    ptr->y=y;
    return ptr;
}

void print(point *);

int main() {
    point *ptr1=entry(2,3);
    point *ptr2=entry(10,20);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);
    ptr1=NULL;
    ptr2=NULL;
    return 0;
}

void print(point *p) {
    printf("%d | %d\n", p->x, p->y);
    return;
}