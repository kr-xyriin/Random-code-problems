#include <iostream>
#include <vector>

using namespace std;

void reverseVector(vector<int> &vec) {
    int size=vec.size()-1;
    for (int i=0, j=size; i<j; i++, j--) {
        int temp=vec[i];
        vec[i]=vec[j];
        vec[j]=temp;
    }
    return;
}

void display(vector<int> &vec) {
    for (int val:vec) {
        cout<<val<<" ";
    }
    cout<<endl;
    return;
}

int main() {
    vector<int> vec={1,2,3,4,5,6,7,8,9,0};
    cout<<"Before: "<<endl;
    display(vec);
    cout<<endl;
    reverseVector(vec);
    cout<<"After: "<<endl;
    display(vec);
    cout<<endl;
    return 0;
}