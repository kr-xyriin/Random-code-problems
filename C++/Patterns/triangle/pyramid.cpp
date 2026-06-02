/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1  
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter limit: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int s=n-1; s>i; s--) {
            cout<<"  ";
        }
        for (int j=0; j<i+1; j++) {
            cout<<(j+1)<<" ";
        }
        for (int k=i; k>0; k--) {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}