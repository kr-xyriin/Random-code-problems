#include <stdio.h>

void reverse(int arr[]);

int main() {
    int arr[7]={1, 2, 3, 4, 5, 6, 7};
    reverse(arr);
    for (int i=0; i<7; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void reverse(int arr[]) {
    int temp1=0, temp2=6;
    while (temp1<temp2) {
        int temp=arr[temp1];
        arr[temp1]=arr[temp2];
        arr[temp2]=temp;
        temp1++;
        temp2--;
    }
    return;
}

// using extra array to reverse original array

// int main() {
//     int arr0[7]={1,2,3,4,5,6,7}, arr1[7];
//     for (int i=0; i<7; i++) {
//         arr1[6-i]=arr0[i];
//     }
//     for (int i=0; i<7; i++) {
//         arr0[i]=arr1[i];
//         printf("%d\n", arr0[i]);
//     }
//     return 0;
// }