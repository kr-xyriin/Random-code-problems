// Program to print the following pattern
/*
*******
 ***** 
  *** 
   *
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter base value (odd number): ");
    scanf("%d", &n);
    //row
    for (int i = 0; i <= n/2; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        //column
        for (int k = 0; k < n - 2*i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}