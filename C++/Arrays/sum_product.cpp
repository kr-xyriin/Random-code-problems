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

int sumArr(int arr[], int size) {
    int sum=0;
    for (int i=0; i<size; i++) {
        sum+=arr[i];
    }
    return sum;
}

int productArr(int arr[], int size) {
    int product=1;
    for (int i=0; i<size; i++) {
        product*=arr[i];
    }
    return product;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    cout<<endl;
    cout<<"Sum: "<<sumArr(arr, size)<<endl;
    cout<<"Product of elements: "<<productArr(arr, size)<<endl;
    return 0;
}