/*
1 1 1 1 1 
  2 2 2 2 
    3 3 3 
      4 4 
        5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter limit: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int s=0; s<i; s++) {
            cout<<"  ";
        }
        for (int j=n; j>i; j--) {
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}