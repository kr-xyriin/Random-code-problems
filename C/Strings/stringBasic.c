#include <stdio.h>

int main() {
    char arr1[]="college wallah\0";
    char arr2[]="best channel for coders";
    int i=0;
    while (arr2[i]!='\0') {
        printf("%c", arr2[i]);
        i++;
    }
    return 0;
}