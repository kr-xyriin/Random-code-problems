#include <iostream>
#include <vector>

using namespace std;

int maxWater(vector<int> &heights) {
    int mw=0;
    int i=0, j=heights.size()-1;
    while (i<j) {
        int h=min(heights[i], heights[j]);
        int w=j-i;
        int ar=h*w;
        mw=max(mw, ar);
        heights[i]<heights[j]?i++:j--;
    }

    return mw;
}

int main() {
    vector<int> heights={1,8,6,2,5,4,8,3,7};
    cout<<"Max water that can be stored: "<<maxWater(heights)<<endl;
    return 0;
}