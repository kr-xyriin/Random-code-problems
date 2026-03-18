/*
Find the difference between the sum of elements at even indices to the sum ot elements at odd indices.
*/

#include <stdio.h>

int main() {
    int arr[6]={1,3,5,7,9,11}, diff=0, sum_even=0, sum_odd=0;
    for (int i=0; i<6; i++) {
        if (i%2==0) sum_even+=arr[i];
        else sum_odd+=arr[i];
    }
    printf("Difference: %d", sum_even-sum_odd);
    return 0;
}