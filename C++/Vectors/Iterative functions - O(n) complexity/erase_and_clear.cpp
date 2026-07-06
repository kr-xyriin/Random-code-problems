#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec);

int main() {
    vector<int> vec={1,2,3,4,5,6,7,8,9,0};
    display(vec);
    cout<<endl;
    cout<<"Deleting element at first index: "<<endl;
    vec.erase(vec.begin());
    display(vec);
    cout<<endl;
    cout<<"Deleting the element at index 1: "<<endl;
    vec.erase(vec.begin()+1);
    display(vec);
    cout<<endl;
    cout<<"Deleting elements in a index range(4,8): "<<endl;       // [start, end) -> 'start' is included while end is 'excluded'
    vec={1,2,3,4,5,6,7,8,9,0};
    display(vec);
    cout<<"Size and capacity of current vector: ("<<vec.size()<<", "<<vec.capacity()<<")"<<endl;
    vec.erase(vec.begin()+4, vec.begin()+9);
    display(vec);
    cout<<"Size and capacity of current vector: ("<<vec.size()<<", "<<vec.capacity()<<")"<<endl;

    // Therefore these iterative functions,
    //  -> .erase()
    //  -> .clear()
    //  don't change the capacity but reduce the size
    // Therefore the total space occupied remains same

    cout<<endl;
    cout<<"Clearing the whole vector: "<<endl;
    vec.clear();
    display(vec);    // prints nothing
    cout<<"Size and capacity of current vector: ("<<vec.size()<<", "<<vec.capacity()<<")"<<endl;
    return 0;
}

void display(vector<int> vec) {
    for (int val:vec) cout<<val<<" ";
    cout<<endl;
    return;
}