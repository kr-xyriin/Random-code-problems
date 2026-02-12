#include<stdio.h>

int fact(int num);

int fact(int num) {
    int factorial=1;
    for (int i=num; i>0; i--) {
        factorial*=i;
    }
    return factorial;
}

    int main() {
        int number;
        printf("Enter the number whose factorial you want: ");
        scanf("%d", &number);
        printf("%d", fact(number));
    }