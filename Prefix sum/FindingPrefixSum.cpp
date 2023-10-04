#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector <int> &v) {
    for (int i = 1; i < v.size(); i++) {
        v[i]=v[i-1] + v[i];
    }
    return ;
}

int main() {
    vector <int> v;
    v = {5,4,1,2,3};

    prefixSum(v);

    for (int ele:v) {
        cout<<ele<<" ";
    }

    return 0;
}