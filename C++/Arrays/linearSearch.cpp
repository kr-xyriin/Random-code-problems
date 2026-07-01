#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i=0; i<size; i++) {
        if (arr[i]==target) return i;
    }
    return -1;
}

void display(int arr[], int size) {
    cout<<"Printing the array...\n";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    cout<<endl;
    int target;
    cout<<"Enter target element: ";
    cin>>target;
    cout<<endl;
    if (linearSearch(arr, size, target)!=-1) {
        cout<<"Element found!!\n";
        cout<<"Index of element: "<<linearSearch(arr, size, target)<<endl;
    } else {
        cout<<"Element not found!!"<<endl;
    }
    return 0;
}