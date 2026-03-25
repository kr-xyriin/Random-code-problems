#include <stdio.h>

int main() {
    int arr[7]={1,2,3,4,5,6,7}, i1=1, i2=4;
    while (i1<i2) {
        int temp=arr[i1];
        arr[i1]=arr[i2];
        arr[i2]=temp;
        i1++;
        i2--;
    }
    for (int i=i1, j=i2; i<j; i++, j--) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    int i=0;
    while (i<7) {
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}