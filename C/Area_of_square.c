#include <stdio.h>
int main()
{
    float a, area;
    printf("Enter the length of the side: ");
    scanf("%f", &a);
    area = a*a;
    printf("Area of square is: %.2f", area);
    return 0;
}