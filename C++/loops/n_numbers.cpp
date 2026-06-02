#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter limit: ";
    cin>>n;
    int temp=1;
    while (temp<=n) {
        cout<<temp<<" ";
        temp++;
    }
    cout<<endl;
    return 0;
}