// Check if a given array is a palindrome or not

#include <stdio.h>

int main() {
    int arr[7]={2,2,2,4,2,2,2}, check=1;
    for (int i=0, j=6; i<j; i++, j--) {
        if (arr[i]!=arr[j]) {
            printf("Given array is not a palindrome...\n");
            check=0;
            break;
        }
    }
    if (check==1) printf("Given array is a palindrome...");
    return 0;
}