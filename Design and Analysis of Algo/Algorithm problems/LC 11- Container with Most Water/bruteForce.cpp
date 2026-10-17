#include <iostream>
#include <vector>

using namespace std;

int maxWater(vector<int> &heights) {
    int mw=0;
    for (int i=0; i<heights.size(); i++) {
        for (int j=i+1; j<heights.size(); j++) {
            int width=j-i;
            int h=min(heights[i], heights[j]);
            int ar=width*h;
            mw=max(mw, ar);
        }
    }

    return mw;
}

int main() {
    vector<int> heights={1,8,6,2,5,4,8,3,7};
    cout<<"Max water that can be stored: "<<maxWater(heights)<<endl;
    return 0;
}