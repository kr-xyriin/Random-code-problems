#include <iostream>

using namespace std;

void display(int arr[], int size) {
    cout<<"Printing the array...\n";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void swapMaxMin(int arr[], int size) {
    int max=INT_MIN, min=INT_MAX, maxIndex, minIndex;
    for (int i=0; i<size; i++) {
        if (arr[i]>max) {
            max=arr[i];
            maxIndex=i;
        }
        if (arr[i]<min) {
            min=arr[i];
            minIndex=i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);
    return;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    cout<<endl;
    cout<<"After swapping: "<<endl;
    swapMaxMin(arr, size);
    cout<<endl;
    display(arr, size);
    return 0;
}