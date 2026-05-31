#include <stdio.h>

int main() {
    int x=10;
    void *ptr=&x;
    printf("Value at void pointer i.e. integer x: %d", *(int*)ptr);
    return 0;
}