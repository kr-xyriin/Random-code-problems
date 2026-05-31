#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
} point;

void print(point p){
    printf("%d | %d\n", p.x, p.y);
}

int main() {
    point p1={23, 45};
    point p2={56, 90};
    print(p1);
    print(p2);
    return 0;
}