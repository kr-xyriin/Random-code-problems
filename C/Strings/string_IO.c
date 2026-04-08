#include <stdio.h>
//#include <string.h>
    /*
    we don't need string.h to use %s as a format specifier to print whole string
    */
int main() {
    char str1[]="College wallah is best";
    char str2[50];
    // printf("%s", str);

    /*
    print the string using the built-in fucntion puts()
    */
    puts(str1);
    puts("I am currently studying C for DSA");
    
    scanf("%[^\n]s", str2);
    puts(str2);
    /*
    take inut using the in-built fucntion gets()
    */
    // gets(str2);
    // puts(str2);
    return 0;
}