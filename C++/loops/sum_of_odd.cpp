#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter limit: ";
    cin>>n;
    int temp=1, sum=0;
    while (temp<=n) {
        if (temp%2!=0) sum+=temp;
        temp++;
    }
    cout<<"Sum of odd numbers: "<<sum<<endl;
    return 0;
}