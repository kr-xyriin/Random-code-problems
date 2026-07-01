#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num, reverse=0;
    while (temp) {
        int rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
    }
    cout<<"Reversed number: "<<reverse<<endl;

    if (reverse==num) {
        cout<<"\nProvided number is also a palindrome!!\n";
    }
    return 0;
}