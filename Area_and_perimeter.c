/*write a c programme to calculate the area and perimeter of a rectangle based on its length and breadth.*/
#include <stdio.h>
int main()
{
    float area = 0, perimeter = 0, length = 0, breadth = 0;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    printf("Area of the rectangle is: %.2f\n", area);
    printf("Perimeter of the rectangle is: %.2f \n", perimeter);
    return 0;
}