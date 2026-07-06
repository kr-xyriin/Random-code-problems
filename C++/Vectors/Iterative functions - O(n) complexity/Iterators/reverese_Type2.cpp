#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec={1,2,3,4,5,6,7,8,9,0};
    for (vector<int>::reverse_iterator itr=vec.rbegin(); itr!=vec.rend(); itr++) cout<<*itr<<" ";
    cout<<endl;    
    return 0;
}