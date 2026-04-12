#include <stdio.h>

int main() {
    char str[]="College Wallah";
    char *ptr=str; // '&' not needed because the name of an array stores the address of its first element 
    // printf("%u\n", str);
    // printf("%u\n", ptr);
    // printf("%u\n", &str[1]);
    while (*ptr!='\0') {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}