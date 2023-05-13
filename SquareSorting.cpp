#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order (No.can be negetive also)
void squareSorting(vector<int> &v) {
    //Squaring elements
     for (int i=0; i<v.size(); i++) {
        v[i]=v[i]*v[i];
    }
    //Soring use sort function
    sort(v.begin(), v.end());
    return;
}
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    //Array input
    vector<int> v;
    for (int i=0; i<n; i++) {
        int ele;
        cout<<"Enter an integer: ";
        cin>>ele;
        v.push_back(ele);
    }
    //Printing initial array
    cout<<"Initial array: ";
    for (int ele:v) {
        cout<<ele<<" ";
    }
    cout<<endl;
    squareSorting(v);
    //Printing Final array
    cout<<"Final array: ";
    for (int ele:v) {
        cout<<ele<<" ";
    }
    return 0;
}