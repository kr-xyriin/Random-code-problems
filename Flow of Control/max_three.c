// Program to find the maximum of three numbers using ternary operator
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers sepearted by a space: ");
    scanf("%d %d %d", &a, &b, &c);
    a > b ? (a > c ? printf("%d is maximum\n", a) : printf("%d is maximum\n", c)) : (b > c ? printf("%d is maximum\n", b) : printf("%d is maximum\n", c));
    return 0;
}