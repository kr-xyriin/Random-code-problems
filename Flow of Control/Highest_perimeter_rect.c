/*
WAP using ternary operator, the user should input length and breadth of a rectangle, 
    one has to find out which rectangle has the highest perimeter.
Minimum no. of rectangles should be three.
*/
#include <stdio.h>
int main()
{
    float l1, b1, l2, b2, l3, b3, p1, p2, p3, max;
    printf("Enter the length and breadth of the rectangles in the following order:\nl1 b1 l2 b2 l3 b3 seperated by whitespaces\nEnter here: ");
    scanf("%f %f %f %f %f %f", &l1, &b1, &l2, &b2, &l3, &b3);
    p1 = 2*(l1+b1);
    p2 = 2*(l2+b2);
    p3=2*(l3+b3);
    // Syntax: variable = (condition) ? expressionTrue : expressionFalse;
    max = (p1>p2) ? p1 : p2;
    max = (max>p3) ? max : p3;
    printf("Highest perimeter is: %.2f\n", max);
    if (max==p1){printf("Rectangle 1 has the highest perimeter");}
    if (max==p2){printf("Rectangle 2 has the highest perimeter");}
    if (max==p3){printf("Rectangle 3 has the highest perimeter");}
    return 0;
}