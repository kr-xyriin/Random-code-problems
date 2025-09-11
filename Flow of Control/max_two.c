// Program to find the maximum between two numbers using ternary operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers sepearted by a space: ");
    scanf("%d %d", &a, &b);
    a > b ? printf("%d is maximum\n", a) : printf("%d is maximum\n", b);
    return 0;
}