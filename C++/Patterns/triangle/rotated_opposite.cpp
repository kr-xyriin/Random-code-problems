/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter limit: ";
    cin>>n;
    if (n%2!=0) n+=1;

    // top part
    for (int i=0; i<n/2; i++) {
        for (int j=0; j<i+1; j++) cout<<"* ";

        for (int s=n; s>i*2+2; s--) cout<<"  ";

        for (int j=0; j<i+1; j++) cout<<"* ";

        cout<<endl;
    }

    // bottom part
    for (int i=n/2-1; i>=0; i--) {
        for (int j=i; j>=0; j--) cout<<"* ";

        for (int s=0; s<(n/2-i)*2-2; s++) cout<<"  ";

        for (int j=i; j>=0; j--) cout<<"* ";

        cout<<endl;
    }
    return 0;
}