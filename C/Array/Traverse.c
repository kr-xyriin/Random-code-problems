// Traverse using for loop

#include <stdio.h>
// Full fledged loop to input array elements as per user's choice
int main() {
    int length;
    printf("Enter the length of array: ");
    scanf("%d", &length);
    int arr1[length];
    //Value input:
    for (int i=0; i<length; i++) {
        int temp=0;
        printf("Enter (%d)th value: ", i);
        scanf("%d", &temp);
        arr1[i]=temp;
    }
    // Traverse thorugh the array:
    int *loc=arr1;
    for (int i=0; i<length; i++) {
        printf("%d\n", *loc);
        loc++;
    }
}