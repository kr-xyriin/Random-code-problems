#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[]={1,2,3,4,5,8,9,13}, target=8;
    int i=0, j=sizeof(arr)/4-1, flag=false;
    while (flag==false) {
        if (i<j) {
            if (arr[i]+arr[j]==target) {
                printf("Found: %d and %d\n", arr[i], arr[j]);
                flag=true;
            }
            else if (arr[i]+arr[j]>target) j--;
            else if (arr[i]+arr[j]<target) i++;
        }
        else {
            printf("Elements not found\n");
            break;
        }
    }
    return 0;
}