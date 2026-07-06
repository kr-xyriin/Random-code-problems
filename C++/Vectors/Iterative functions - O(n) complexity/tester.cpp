#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1(3,0);   // 3 elements
    cout << "v1 size=" << v1.size() 
         << " capacity=" << v1.capacity() << endl;

    vector<int> v2;        // empty
    for(int i=0;i<10;i++) v2.push_back(i);
    cout << "v2 size=" << v2.size() 
         << " capacity=" << v2.capacity() << endl;
}
