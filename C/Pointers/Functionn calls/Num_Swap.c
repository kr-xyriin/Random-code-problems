// NumSwap.c but using function call by reference

#include <stdio.h>

void swap(int *a1, int *a2);

int main() {
    int x=1, y=2;
    printf("N1=%d N2=%d", x, y);
    printf("\n");
    swap(&x, &y);
    printf("N1=%d N2=%d", x, y);
    return 0;
}

void swap(int *a1, int *a2) {
    int t;
    t=*a1;
    *a1=*a2;
    *a2=t;
}