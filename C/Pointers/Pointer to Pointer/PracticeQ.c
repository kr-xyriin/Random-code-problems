#include <stdio.h>
int main() {
    int i=1;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("i = %d",**pptr);
    return 0;
}