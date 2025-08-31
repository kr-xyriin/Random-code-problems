#include <stdio.h>
#define pi 3.14
int main()
{
    float rad, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    area = pi * rad * rad;
    printf("Area of the circle is: %.2f\n", area);
    return 0;
}