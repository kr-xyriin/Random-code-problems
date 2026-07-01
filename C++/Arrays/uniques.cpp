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

void unique(int arr[], int size) {
    for (int i=0; i<size; i++) {
        int count=0;
        for (int j=0; j<size; j++) {
            if (arr[j]==arr[i]) {
                count++;
            }
        }
        if (count==1) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10, 1, 3, 31, 54, 11, 10, 2, 42, 11, 1, 0};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    cout<<endl;
    cout<<"Unique elements: ";
    unique(arr, size);
    return 0;
}