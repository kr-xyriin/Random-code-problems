#include <stdio.h>

int main() {
    int size;
    printf("Enter no. of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input array:\n");
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int position;
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);
    if (position<0 || position>size) {
        printf("Invalid position!\n");
        return 0;
    }
    printf("Element to be deleted: %d\n", arr[position-1]);
    for (int i=position-1; i<size; i++) arr[i]=arr[i+1];
    size--;
    for (int i=0; i<size; i++) printf("%d ", arr[i]);
    return 0;
}