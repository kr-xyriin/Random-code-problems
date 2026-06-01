#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    sum=num1+num2;
    cout<<"Sum of the numbers: "<<sum<<endl;
    cout<<"Size of sum: "<<sizeof(sum)<<endl;
    return 0;
}