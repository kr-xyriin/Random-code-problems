#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec={1,2,3,4,5,6,7,8,9,0};
    cout<<*vec.begin()<<endl;
    cout<<*vec.end()<<endl;     // Points just past the last index
    cout<<*(vec.end()-1)<<endl;     // Points at the last index
    // cout<<vec.back()<<endl;
    return 0;
}