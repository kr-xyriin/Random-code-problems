#include <stdio.h>
int main() {
    int age=50;
    int *ptr=&age;
    // printf("%p\n", &ptr);
    // printf("%p\n", ptr);
    // printf("%u\n", &ptr);
    // printf("%u\n", ptr);
    printf("%u\n", &age);
    printf("%d\n", age);
    printf("%u\n", ptr);
}