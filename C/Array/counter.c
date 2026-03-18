// Count the no of elements in a given array greater than a given number x

#include <stdio.h>

int main() {
    int arr[7]={1,2,3,4,5,6,7}, limit, count=0;
    printf("Enter limit: ");
    scanf("%d", &limit);
    for (int i=0; i<7; i++) {
        if (limit<arr[i]) count++;
    }
    printf("No. of numbers greater than %d: %d\n", limit, count);
    return 0;
}