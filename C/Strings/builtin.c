#include <stdio.h>
#include <strings.h>

int main() {
    char name[50];
    printf("Enter a string: ");
    strcpy(name, gets(name));

    puts(name);
    return 0;
}