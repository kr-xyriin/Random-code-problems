#include <iostream>

using namespace std;

int main() {
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter data in the array: \n";
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<<"\nData entered successfully!"<<endl;
    cout<<"\nPrinting the data...\n";
    int min=INT_MAX, max=INT_MIN, minIndex, maxIndex;
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
        if (arr[i]<min) {
            min=arr[i];
            minIndex=i;
        }
        if (arr[i]>max) {
            max=arr[i];
            maxIndex=i;
        }
    }
    cout<<endl;
    cout<<"\nIndex of minimum number: "<<minIndex<<endl;
    cout<<"Index of maximum number: "<<maxIndex<<endl;
    return 0;
}