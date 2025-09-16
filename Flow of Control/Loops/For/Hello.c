// Print hello n __TIMESTAMP__

#include <stdio.h>
int main() {
    int n;
    printf("How many times do you need to print?: ");
    scanf("%d", &n);
    if (n>0) {
        for (int i=0; i <=n; i+=1) {
            printf("Hello\n");
        } 
        printf("Out of the loop\n");
    } else {
        printf("Invalid input!!");
    }
    return 0;
}