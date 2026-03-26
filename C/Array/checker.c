// Check if the given element is present in the array or not

#include <stdio.h>

int main() {
    int arr[7]={1,2,3,4,5,6,7}, element=6, flag=0, pos;
    for (int i=0; i<7; i++) {
        if (arr[i]==element) {
            flag=1;
            pos=i;
            break;
        }
    }
    if (flag==1) printf("Element found at index [%d]", pos);
    else printf("Element not found... ");
    return 0;
}