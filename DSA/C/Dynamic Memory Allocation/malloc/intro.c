#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr=NULL;
    ptr=malloc(sizeof(*ptr));
    *(int*)ptr=10;
    printf("%d", *(int*)ptr);
    free(ptr);
    ptr=NULL;
    return 0;
}