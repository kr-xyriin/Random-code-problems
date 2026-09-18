#include <iostream>

using namespace std;

int kadanes(int arr[], int n) {
    int curSum=0, maxSum=INT_MIN;
    for (int i=0; i<n; i++) {
        curSum+=arr[i];
        maxSum=max(curSum, maxSum);
        if (curSum<0) curSum=0;
    }
    return maxSum;
}

int main() {
    int arr[]={3,-4,5,4,-1,7,-8}, size=sizeof(arr)/sizeof(arr[0]);
    int maximum=kadanes(arr, size);
    cout<<"Maximum subarray sum: "<<maximum<<endl;
    return 0;
}