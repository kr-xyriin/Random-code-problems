#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

int *num() {
    int *ptr, i;
    ptr=(int*)malloc(5*sizeof(*ptr));
    printf("Enter 5 numbers:\n");
    for (i=0; i<5; i++) scanf("%d", ptr+i);
    return ptr;
}

int main() {
    int i, sum=0;
    int *ptr=num();
    for (i=0; i<5; i++) sum+=*(ptr+i);
    printf("Sum: %d", sum);
    free(ptr);
    ptr=NULL;
    return 0;
}