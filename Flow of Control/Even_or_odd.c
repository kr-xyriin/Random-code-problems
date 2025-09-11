// Program to check whether a number is even or odd using ternary operator
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    a % 2 == 0 ? printf("%d is even", a) : printf("%d is odd", a);
    return 0;
}