#include<iostream>
#include<vector>
using namespace std;
// Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range of indices  from I to r (both included).
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    //array input
    vector <int> v(n+1);
    for (int i=0; i<=n; i++) {
        cout<<"Enter element: "<<" ";
        cin>>v[i];
    }
    return 0;

    //prefix sum array
    for (int i=1; i<=n; i++) {
        v[i]=v[i-1] + v[i];
    }

    //queries
    int q;
    cout<<"Enter the queries: ";
    cin>>q;

    while(q) {
        int l,r;
        cout<<"Enter l: ";
        cin>>l;
        cout<<endl;
        cout<<"Enter r: ";
        cin>>r;
        
        // Ans = preffixsum[r] - preffixsum[l-1]
        int ans= 0;
        ans = v[r] - v[l-r];

        q--;
    }
}