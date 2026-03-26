// WAP to find a duplicate element in a given array

#include <stdio.h>

int main() {
    int arr[7]={1,2,7,4,5,6,7}, flag=0, index, element;
    for (int i=0; i<7; i++) {
        for (int j=i+1; j<7; j++) {
            if (arr[i]==arr[j]) {
                element=arr[i];
                flag=1;
                index=i;
                break;
            }
        }
    }
    if (flag==1) printf("Duplicate element -> %d found at index [%d]", element, index);
    else printf("No duplicate element found...");
    return 0;
}