#include <stdio.h>
#include <string.h>

int main() {
    int size;
    char str[]="Hello";
    char *ptr=str; // shallow copy
    char *str2=str; // deep copy

    printf("%s\n", str2);
    ptr[0]='M';
    printf("%s\n", ptr);

    size=sizeof(str);
    printf("%d\n", size);

    char str3[size];
    for (int i=0; i<size; i++) str3[i]=str[i];
    printf("%s\n", str3);
    return 0;
}