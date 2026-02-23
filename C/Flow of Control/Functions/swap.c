// Swap two numbers using pass by value and pass by reference

#include<stdio.h>

void swap();

/*PASS BY VALUE*/
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

void swap(int a, int b) {

}

int main() {
    return 0;
}