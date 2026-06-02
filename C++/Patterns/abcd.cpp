/*
ABCD
ABCD
ABCD
ABCD
*/

#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<4; i++) {
        char ch='A';
        for (int j=0; j<26; j++) {
        cout<<ch;
        ch+=1;
        }
        cout<<endl<<endl;
    }
    return 0;
}