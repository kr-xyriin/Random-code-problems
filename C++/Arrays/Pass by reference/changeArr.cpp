#include <iostream>

using namespace std;

void changeArr(int arr[], int size) {
    for (int i=0; i<size; i++) {
        arr[i]=2*arr[i];
    }
    return;
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
    changeArr(arr, size);
    cout<<"Array after change: \n";
    display(arr, size);
    return 0;
}