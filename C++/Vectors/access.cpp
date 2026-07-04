#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec={1,2,3,4,5,6};
    cout<<vec[0]<<endl;
    vec[0]=10;

    cout<<"Expression using '.at()' function: "<<vec.at(0)<<endl;

    cout<<vec[0]<<endl;
    return 0;
}