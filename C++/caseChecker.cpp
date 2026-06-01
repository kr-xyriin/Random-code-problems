#include <iostream>
using namespace std;

int main() {
    char character;
    cout<<"Enter a character: ";
    cin>>character;
    if (character>='a' && character<='z') cout<<"Lowercase\n";
    else if (character>='A' && character<='Z') cout<<"Uppercase\n";
    else cout<<"Special characters not allowed!!\n";
    return 0;
}