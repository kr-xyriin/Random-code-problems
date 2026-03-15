#include <stdio.h>

void preInpost(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    preInpost(num);
    return 0;
}

void preInpost(int n) {
    if (n==0) return;
    printf("Pre: %d\n", n);
    preInpost(n-1);
    printf("In: %d\n", n);
    preInpost(n-1);
    printf("Post: %d\n", n);
    return;
}