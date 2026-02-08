#include <stdio.h>
#include <string.h>

// User-defined function
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[100];

    printf("Code by Ankita Bisht\n");
    printf("Enter a string: ");
    gets(str);   // acceptable for assignment level

    // Using standard function
    printf("Length using strlen = %d\n", strlen(str));

    // Using user-defined function
    printf("Length using user-defined function = %d\n", stringLength(str));
}