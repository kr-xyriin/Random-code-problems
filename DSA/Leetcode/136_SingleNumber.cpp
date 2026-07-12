/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
*/

//  LEARNING

/*
n's XOR with n is 0
n's XOR with 0 is n 
*/

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &vec);

int main() {
    vector<int> vec={2,2,1};
    cout<<singleNumber(vec)<<endl;
    return 0;
}

int singleNumber(vector<int> &vec) {
    int result=0; //    Any numbers's XOR with 0 is n therefore initialization is always with 0
    // for (vector<int>::reverse_iterator itr=vec.rbegin(); itr!=vec.rend(); itr++) {
    //     int value=*itr;
    //     result^=value;
    // }

    for (int val:vec) {
        result^=val;
    }
    return result;
}