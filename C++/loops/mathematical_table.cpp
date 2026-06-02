#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    cout<<"Enter number: ";
    cin>>n1;
    cout<<"Enter limit: ";
    cin>>n2;
    for(float temp=1; temp<=n2; temp++) {
        cout<<n1<<" x "<<temp<<" = "<<temp*n1<<endl;
    }
    return 0;
}