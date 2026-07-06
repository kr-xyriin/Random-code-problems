#include <iostream>
#include <vector>
#include <list>

using namespace std;

void display(list<int> l) {
    for (int val:l) cout<<val<<" ";
    cout<<endl;
}

int main() {
    list<int> lst={2,3,4,5,6,7,8,9};
    display(lst);
    cout<<endl;
    cout<<"Inserting element at back: "<<endl;
    lst.push_back(0);
    lst.emplace_back(-1);
    display(lst);
    cout<<endl;
    cout<<"Inserting from the front: "<<endl;
    lst.push_front(1);
    lst.emplace_front(0);
    display(lst);
    return 0;
}