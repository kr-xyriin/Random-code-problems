#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter limit: ";
    cin>>num;
    int sum=0;
    for (int i=1; i<=num; i++) {
        if (i%3==0) sum+=i;
    }
    cout<<"Sum of numbers divisible by 3: "<<sum<<endl;
    return 0;
}