#include <stdio.h>

void square(int *i);

int main(){
    int number = 5;
    square(&number);
    printf("%d", number);
    return 0;
}

void square(int *i) {
    *i = (*i) * (*i);
    printf("%d\n", *i);
}