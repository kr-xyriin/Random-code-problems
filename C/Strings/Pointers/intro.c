#include <stdio.h>

int main() {
    char str[]="College Wallah";
    char *ptr=str;
    // printf("%u\n", str);
    // printf("%u\n", ptr);
    // printf("%u\n", &str[1]);
    while (*ptr!='\0') {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}