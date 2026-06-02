#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    bool flag=false;
    for (int i=2; i<=num/2; i++) {
        if (num%i==0) {
            flag=true;
            break;
        }
    }
    if (flag==false) cout<<"is Prime\n";
    else cout<<"is not Prime\n";
    return 0;
}