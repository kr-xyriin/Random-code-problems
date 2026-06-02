#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=0, temp;
    temp=num;
    while (temp!=0) {
        int temp1=temp%10;
        sum+=pow(temp1, 3);
        temp/=10;
    }
    if (sum==num) cout<<"Armstrong\n";
    else cout<<"Not an Armstrong\n";
    return 0;
}