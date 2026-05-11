#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct ex {
    int data;
    union {
        int long longdata;
    };
} ex;

int main() {
    ex example;
    example.data=10;
    example.longdata=10000;
    printf("%d\n", example.data);
    printf("%d\n", example.longdata);
    return 0;
}