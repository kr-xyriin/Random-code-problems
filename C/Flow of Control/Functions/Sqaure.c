// Print sqaure of a number using library functions

#include <stdio.h>
#include <math.h>

float Square(float number);

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Sqaure of %.2f is: %.2f", num, Square(num));
    printf("\n");
    return 0;
}

float Square(float number) {
    float square;
    square=pow(number,2);
    return square;
}