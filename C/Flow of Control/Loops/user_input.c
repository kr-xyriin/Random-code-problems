// Keep taking numbers as input from user until user enters a number which is multiple of 7.

#include <stdio.h>
int main() {
    int n;
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n%7==0) {
            printf("\nOops! You entered a multiple of 7");
            break;
        } else {printf("Please enter another number");}
        printf("\n\n");
    }
    return 0;
}