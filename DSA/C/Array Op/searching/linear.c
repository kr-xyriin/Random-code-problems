#include <stdio.h>
#include <stdbool.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i=0; i<size; i++) scanf("%d", &arr[i]);
    int element;
    scanf("%d", &element);
    int comparisons=0;
    bool found;
    for (int i=0; i<size; i++) {
        comparisons++;
        found=false;
        if (arr[i]==element) {
            printf("Element found at index: %d\n", i);
            found=true;
            break;
        }
    }
    if (found==false) printf("Element not found\n");
    printf("Comparisons: %d\n", comparisons);
    return 0;
}