// Testing modulo operator
#include <stdio.h>
int main()
{
    //1
    printf("%d\n", 5%2);
    //2
    printf("%d\n", -5%2);
    //3
    printf("%d\n", 5%-2);
    //4
    printf("%d\n", -5%-2);
    return 0;
}
/*
In C:

The sign of the remainder is always the same as the sign of the dividend (the left-hand operand).

So:

(+ % +) → positive remainder

(- % +) → negative remainder

(+ % -) → positive remainder

(- % -) → negative remainder
*/