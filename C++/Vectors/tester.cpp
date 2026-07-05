#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec) {
    for (int val:vec) cout<<val<<" ";
    cout<<endl;
    return;
}

int main() {
    vector<int> vec={1,2,3,4,5,6,7,8,9,0};
    cout<<"Current vector: ";
    display(vec);
    cout<<endl;
    cout<<"First element: "<<vec.front()<<endl;
    cout<<"Last element: "<<vec.back()<<endl;
    cout<<"Add an element to last: ";
    vec.push_back(-1);
    vec.emplace_back(-2);
    cout<<endl<<"Current vector: ";
    display(vec);
    cout<<endl;
    cout<<"Remove last element: "<<endl;
    vec.pop_back();
    cout<<endl<<"Current vector: ";
    display(vec);
    cout<<endl;
    cout<<"View the value stored in an index: "<<endl;
    display(vec);
    cout<<"At index 2: "<<vec[2]<<endl;
    cout<<"At index 8: "<<vec.at(8)<<endl;
    
    return 0;
}