#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(6);

    for (int val:lst) cout<<val<<" ";
    cout<<endl;
    return 0;
}