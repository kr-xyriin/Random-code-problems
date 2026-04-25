#include <stdio.h>

int main() {
    int arr[11]={1,2,3,4,5,6,7,8,9,10,5}, sum, sum_arr=0;
    for (int i=0; i<11; i++) sum_arr+=arr[i];
    sum=(((sizeof(arr)/4)-1)*((sizeof(arr)/4)))/2;
    printf("%d\n", sum_arr-sum);
    return 0;
}