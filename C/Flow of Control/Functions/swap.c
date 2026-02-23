// Swap two numbers using pass by value and pass by reference

#include<stdio.h>

/*PASS BY REFERENCE*/
void swap_by_refer(int *a, int *b);


/*PASS BY VALUE*/
void swap_by_value(int a,int b);

// does not works because PASS BY VALUE type of function does not apply global changes
/*
void swap() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Before swapping: a=%d | b=%d", a, b);
    int temp=a;
    a=b;
    b=temp;
    printf("\n");
    printf("After swapping: a=%d | b=%d", a, b);
    return;
}

int main() {
    swap();
}
*/

void swap_by_refer(int *a, int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}

int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Before swap: a=%d | b=%d\n", a, b);
    swap_by_refer(&a, &b);
    printf("After swap: a=%d | b=%d", a, b);
    return 0;
}