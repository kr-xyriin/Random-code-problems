#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &vec, int num) {
    int value, index=0;
    bool flag=false;
    for (int val:vec) {
        if (val==num) {
            flag=true;
            break;
        } else index++;
    }
    if (flag==true) return index;
    else return 0;
}

int main() {
    int num;
    vector<int> vec={1,2,3,4,5,6,7,8,9,0};
    cout<<"Enter number to search: ";
    cin>>num;
    int index=linearSearch(vec, num);
    if (index) {
        cout<<"Element "<<vec[index]<<" found at index: ["<<index<<"]"<<endl;
    }
    else cout<<"Element not found!!"<<endl;
    return 0;
}