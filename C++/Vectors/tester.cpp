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
    vec[0]=vec[9];
    cout<<vec[0]<<endl;
    cout<<vec[9]<<endl;    
    return 0;
}