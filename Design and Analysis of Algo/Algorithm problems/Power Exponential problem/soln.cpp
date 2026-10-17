#include <iostream>

using namespace std;

double power() {
    double x, result=1.0;
    long long n;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter exponent: ";
    cin>>n;
    cout<<endl;

    if (n==0) return result;
    if (n==1) return x;
    if (x==0) return x;
    if (x==1) return result;

    if (n<0) {
        x=1/x;
        n=-n;
    }

    while (n>0) {
        if (n & 1) result*=x;
        x*=x;
        n>>=1;
    }

    return result;
}

int main() {
    double res=power();
    cout<<"Result: "<<res<<endl;
    return 0;
}