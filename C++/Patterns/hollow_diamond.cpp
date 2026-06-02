/*
   *
  * *
 *   *
*     *
 *   *
  * *
   *    
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter limit: ";
    cin>>n;

    // top part

    // row
    for (int i=0; i<n; i++){
        // spaces
        for (int s=n-1; s>i; s--) {
            cout<<"  ";
        }

        cout<<"* ";

        // spaces in line
        for (int s=0; s<i*2-1; s++) {
            cout<<"  ";
        }

        if (i!=0) {
            cout<<"* ";
        }
        cout<<endl;
    }

    // bottom part

    for (int i=n-2; i>=0; i--) {

        // left spaces
        for (int s=n-1; s>i; s--) {
            cout<<"  ";
        }

        // first star
        cout<<"* ";

        // inner spaces
        for (int s=0; s<i*2-1; s++) {
            cout<<"  ";
        }

        // second star
        if (i!=0) {
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0; 
}