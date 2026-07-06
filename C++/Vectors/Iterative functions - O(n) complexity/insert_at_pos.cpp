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
    display(vec);
    cout<<"Size and capacity of current vector: ("
        <<vec.size()<<", "
        <<vec.capacity()
        <<")"<<endl;
    cout<<endl;
    cout<<"Inserting 11 at position -> 6: "<<endl;
    
    // .insert(index of pos, value of element)
    // [.begin()+pos-1] OR [.begin()+index]

    vec.insert(vec.begin()+5, 11);
    display(vec);
    cout<<"Size and capacity of current vector: ("
        <<vec.size()<<", "
        <<vec.capacity()
        <<")"<<endl;
    return 0;
}