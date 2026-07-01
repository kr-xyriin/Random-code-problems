// Two pointer

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

void reverse(int arr[], int size) {
    for (int i=0, j=size-1; i<j; i++, j--) {
        // int temp=arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;
        swap(arr[i], arr[j]);
    }
    return;
} 

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    cout<<endl;
    cout<<"Reversing the array...\n";
    reverse(arr, size);
    cout<<endl;
    display(arr, size);
    return 0;
}