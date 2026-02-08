// Function to calculate areas od cicrcle sqaure and rectangle

#include <stdio.h>
#include <math.h>

float square(float side);
float circle(float radius);
float rectangle(float len, float bred);

int main() {
    int choice;
    printf("Calculate:\nArea of square [1]\nArea of circle [2]\nArea of rectangle [3]\n\nEnter your choice [1/2/3]: ");
    scanf("%d", &choice);
    printf("\n");
    if (choice==1) {
        float num;
        printf("Enter length of the side: ");
        scanf("%f", &num);
        printf("Area of square is: %.2f", square(num));
        printf("\n\n");
    } else if (choice==2) {
        float num;
        printf("Enter radius of the circle: ");
        scanf("%f", &num);
        printf("Area of circle is: %.2f", circle(num));
        printf("\n\n");
    } else if (choice==3) {
        float num1, num2;
        printf("Enter length & breadth of the rectangle: ");
        scanf("%f %f", &num1, &num2);
        printf("Area of rectangle is: %.2f", rectangle(num1, num2));
        printf("\n\n");
    } else {
        printf("Invalid choice entered");
        printf("Try Again\n\n\n");
        main();
    }
    return 0;
}

float square(float side) {
    float area;
    area=pow(side,2);
    return area;
}

float circle(float radius) {
    float area, pie=3.14;
    area=pie*pow(radius,2);
    return area;
}

float rectangle(float len, float bred) {
    float area;
    area=len*bred;
    return area;
}