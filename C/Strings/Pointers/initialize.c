#include <stdio.h>
#include <string.h>

int main() {
    char str[]="College Wallah";
    char *ptr=str;
    // ptr[0]='c';
    // ptr="College wallah";
    // printf("%s", str);
    char *p=str;
    *p='P';
    printf("%s", str);
    return 0;
}