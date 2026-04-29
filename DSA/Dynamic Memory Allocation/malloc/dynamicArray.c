#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    printf("Number of integers: ");
    scanf("%d", &n);
    int *ptr=(int*)malloc(n*sizeof(*ptr));
    if (ptr==NULL) {
        printf("Memory not available...\n");
        exit(1);
    }
    for (int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    for (int i=0; i<n; i++) printf("%d\n", *(ptr+i));
    free(ptr);
    ptr=NULL;
    return 0;
}