#include <stdio.h>

int sum(int n);

int main() {
    printf("\n%d\n\n", sum(5));
}

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    int sum1=sum(n-1);
    int sum2=sum1+n;
    return sum2;
}