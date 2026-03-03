// this question can be done using two paramaters or using "call -then- code" method

#include<stdio.h>

void printer1(int para, int n);
void printer2(int n);

int main() {
    int num, choice;
    printf("\n1. Print using parameters\n2. Print using 'call -then- code'\n\n");
    printf("Enter your choice [1 / 2]: ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%d", &num);
    switch(choice){
        case 1:
        printer1(1,num);
        break;
        case 2:
        printer2(num);
        break;
        default:
        printf("Invalid choice!!");
        break;
    }

}

void printer1(int para, int n){
    if (para>n) {
        return;
    }
    printf("%d\n", para);
    printer1(para+1, n);
    return;
}

void printer2(int n){
    if (n==0) {
        return;
    }
    printer2(n-1);
    printf("%d\n", n);
    return;
}