#include <stdio.h>

int main() {
    int arr[8]={1,2,3,4,5,6,7,8}, num,  triplets=0;
    printf("Enter a no.: ");
    scanf("%d", &num);
    for (int i=0; i<8; i++) {
        for (int j=i+1; j<8; j++) {
            for (int k=j+1; k<8; k++) {
                if (arr[i]+arr[j]+arr[k]==num) {
                    triplets++;
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("\nTotal no. of triplets: %d\n", triplets);
    return 0;
}