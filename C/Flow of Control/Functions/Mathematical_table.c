// Print the table of a given number using function parameters

#include <stdio.h>
void table(float a, int b);

int main() {
    float num;
    int limit;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("\n");
    table(num, limit);
    return 0;
}

void table(float a, int b) {
    int counter=1;
    while (counter<=b) {
        printf("%.2f x %d = %.2f", a, counter, a*counter);
        printf("\n");
        counter++;
    }
}