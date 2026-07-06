#include <iostream>
#include <vector>
#include <list>

using namespace std;

void display(list<int> l) {
    for (int val:l) cout<<val<<" ";
    cout<<endl;
}

int main() {
    list<int> lst={1,2,3,4,5,6,7,8,9,0};
    display(lst);
    cout<<endl;
    cout<<"Removing element at back: "<<endl;
    lst.pop_back();
    display(lst);
    cout<<endl;
    cout<<"Removing from the front: "<<endl;
    lst.pop_front();
    display(lst);
    return 0;
}