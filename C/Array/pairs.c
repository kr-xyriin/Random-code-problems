#include <stdio.h>

int main() {
    int arr[7]={1,2,3,4,5,6,7}, pairs=0, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i=0; i<7; i++) {
        for (int j=i+1; j<7; j++) {
            if (arr[i]+arr[j]==num) {
                pairs++;
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("\n");
    printf("Total number of pairs: %d", pairs);
    return 0;
}