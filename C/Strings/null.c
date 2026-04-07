/*
Null character:
\0
ascii values -> 0
*/

#include <stdio.h>

int main() {
    char arr[]={'h','e','l','l','o', '\0'};
    // int x=sizeof(arr)/1;
    // for (int i=0; i<x; i++) {
    //     printf("%c", arr[i]);
    // }
    // char ch='\0';
    // int x=0;
    // char a=(char)x; // a -> /0
    // printf("%c\n", a);
    int i=0;
    while (arr[i]!='\0') {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}