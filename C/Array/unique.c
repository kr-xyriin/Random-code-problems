// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include <stdio.h>

int main() {
    int arr[9]={1,11,3,2,4,1,2,3,1}, element, index;
    for (int i=0; i<9; i++) {
        int flag=1;
        for (int j=0; j<9; j++) {
            if (i!=j && arr[i]==arr[j]) {
                flag=0;
                break;
            }
        }
        if (flag==1) {
            element=arr[i];
            index=i;
            printf("Unique element found -> %d found at index [%d]", element, index);
            printf("\n");    
        }
    }   
    return 0;
}