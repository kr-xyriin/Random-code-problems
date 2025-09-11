// Program to check whether entered character is alphabet or not using ternary operator
#include <stdio.h>
int main()
{
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);
    (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z') ? printf("%c is an alphabet", character) : printf("%c is not an alphabet", character);
    return 0;
}