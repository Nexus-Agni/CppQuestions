#include<iostream>
#include<vector>
using namespace std;
// Check that Prefix sum == suffix sum 

void checkPreffixSuffixSum(vector <int> &v) {
    //total sum
    int totalSum = 0;
    for (int ele:v) {
        totalSum = totalSum + ele;
    }

    // checking prefix sum == suffix sum
    int prefixSum = 0;
    for (int i = 1; i<v.size(); i++) {
        prefixSum = v[i-1] + v[i];
        int suffixSum = totalSum - prefixSum;
        if (prefixSum==suffixSum) {
            cout<<"Prefix Sum and suffix sums are equal at: "<<i+1<<"th porsition";
            break;
        }
    }
    return;
}
int main() {
    vector <int> v;
    v = {6,2,4,3,1}; // 2nd positon --> 6+2 = 8 & 4+3+1 = 8

    checkPreffixSuffixSum(v);
    return 0;
}