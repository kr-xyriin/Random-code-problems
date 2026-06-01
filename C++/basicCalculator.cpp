#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    int choice;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    if (choice==1) cout<<"Addition: "<<(num1+num2)<<endl;
    else if (choice==2) cout<<"Subtraction: "<<(num1-num2)<<endl;
    else if (choice==3) cout<<"Multiplication: "<<(num1*num2)<<endl;
    else if (choice==4) cout<<"Division: "<<(num1/num2)<<endl;
    else if (choice==5) cout<<"Modulus: "<<((int)num1%(int)num2)<<endl;
    else cout<<"Invalid choice!!\n";
    return 0;
}