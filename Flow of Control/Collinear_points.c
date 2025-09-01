//WAP to check if these points (x1, y1), (x2, y2) and (x3, y3) are collenear or not.
#include <stdio.h>
int main()
{
    float x1, x2, x3, y1, y2, y3, area;
    printf("Enter the values of coordinates in the following order:\nx1, y1, x2, y2, x3, y3 seperated by commas: ");
    scanf("%f,%f,%f,%f,%f,%f", &x1, &y1, &x2, &y2, &x3, &y3);
    area = (float)1/2 * (x1*(y2 - y3) + x2*(y3-y1) + x3*(y1 - y2));
    // float(1/2) explicitly converts the integer value to flaoting point otherwise 
    // 1/2 will print 0 as it is integer type and decimal values will get truncated
    if (area==0)
    {
        printf("The points are collinear");
    }
    else
    {
        printf("Points are not collinear");
    }
    return 0;
}