// explicit type casting is done to convert bigger datatypes to smaller datatypes

#include <iostream>
using namespace std;

int main() {
    double a=50.55;
    int b=(int)a;      // this statement will remove the decimal part of the double datatype
    cout<<b<<endl;
    return 0;
}