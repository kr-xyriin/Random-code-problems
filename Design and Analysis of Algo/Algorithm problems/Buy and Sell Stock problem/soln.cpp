#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &arr) {
    int mp=0, bb=arr[0];
    for (int i=1; i<arr.size(); i++) {
        if (arr[i]>bb) {
            mp=max(mp, arr[i]-bb);
        }
        bb=min(bb, arr[i]);
    }

    return mp;
}

int main() {
    vector<int> prices={7,1,5,4,2,1};
    cout<<"Max profit: "<<maxProfit(prices)<<endl;
    return 0;
}