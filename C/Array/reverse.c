// Take input from user and print it in reverse

#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int arr[num];
    for (int i=0; i<num; i++) {
        printf("Enter element no. [%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=num-1; i>=0; i--) printf("%d ", arr[i]);
    return 0;
}