#include <iostream>
using namespace std;

int main() {
    // arithmetic operator 
    int a=5, b=2;
    float div=a/(float)b;
    cout<<div<<endl;

    //relational operators [return true[1] or false[0]]
    cout<<(3<5)<<endl;

    // logical operators
    cout<<(true || true)<<endl;
    cout<<(false || true) <<endl;
    cout<<(not true) <<endl;
    cout<<(true and true)<<endl;
    return 0;
}