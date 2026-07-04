/*
<var>.front()
<var>.back()
    -> polar to <var>.push_back()
       and <var>.pop_back()
*/


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec={1,2,3,4,5,6};
    vec.front()=10;
    cout<<vec.front()<<endl;
    vec.back()=1;
    cout<<vec.back()<<endl;
    return 0;
}