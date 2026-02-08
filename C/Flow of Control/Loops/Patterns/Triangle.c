/* 
    *
   ***
  *****
 *******
*********  
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter pattern height (ODD Number): ");
    printf("NOTE: If the entered pattern height is even then the program will increment it by 1\n");
    scanf("%d", &n);
    if (n%2==0) {
        n++;
    }
    for (int i=1; i<=n; i++) {
        for (int j=n; j>i; j--) {
            printf(" ");
        }
        for (int k=1; k<=2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}