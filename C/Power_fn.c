#include <stdio.h> //for input/output
#include <math.h> // for mathematical fns Ex: pow() for exponent, sqrt() for square root
int main()
{
    float a, b, c;
    b=12;
    c=12;
    a = pow (b,c); // a= b^c
    printf("%.2f\n", a);
    return 0;
}
/*CAUTION: To compile this code, you may need to link the math library.
Use the -lm flag with gcc:
gcc Power_fn.c -lm -o Power_fn
*/