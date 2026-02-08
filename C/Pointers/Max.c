// Program to find max of two numbners using Pointers

#include <stdio.h>

int max(int *a, int *b);

int main() {
    int n1, n2;
    n1=4, n2=6;
    printf("Max: %d", max(&n1, &n2));
    return 0;
}

int max(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {return *b;}
}