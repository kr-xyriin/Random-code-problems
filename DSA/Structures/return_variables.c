#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
} point;

point edit(point p) {
    p.x++;
    p.y+=5;
    return p;
}

void print(point p) {
    printf("%d | %d\n", p.x, p.y);
    return;
}

int main() {
    point p1={23,45};
    point p2={45,28};
    print(p1);
    print(p2);
    printf("\n");
    p1=edit(p1);
    p2=edit(p2);
    print(p1);
    print(p2);
    return 0;
}