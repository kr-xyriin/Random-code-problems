#include <iostream>

using namespace std;

void display(int arr[], int size) {
    cout<<"[ ";
    for (int i=0; i<size; i++) cout<<arr[i]<<" ";
    cout<<"]";
    return;
}

int main() {
    // print all the subarrays
    // int arr[]={1,2,3,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for (int st=0; st<n; st++) {
    //     for (int end=st; end<n; end++) {
    //         for (int i=st; i<=end; i++) cout<<arr[i];
    //         cout<<" ";
    //     } cout<<endl;
    // }

    int arr[]={3,-4,5,4,-1,7,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array: "<<endl;
    display(arr, n);
    cout<<endl<<endl;

    int maxSum=INT_MIN;
    
    for (int st=0; st<n; st++) {
        int curSum=0;
        for (int end=st; end<n; end++) {
            curSum+=arr[end];
            maxSum=max(curSum, maxSum);
        }
    }

    cout<<"Maximum subarray sum: "<<maxSum<<endl;
    return 0;
}