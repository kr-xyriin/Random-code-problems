#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9}, size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter element and index of the element to be inserted: ");
    int element, index;
    scanf("%d %d", &element, &index);
    if (index>size) {
        printf("Invalid index!");
        return 0;
    }
    for (int i=size; size>index; size--) arr[size]=arr[size-1];
    arr[index]=element;
    size++;
    for (int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}