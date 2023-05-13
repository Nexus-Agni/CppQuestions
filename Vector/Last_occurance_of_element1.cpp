#include<iostream>
#include<vector>
using namespace std;

// Find the last occurrence of an element x in a given array using foward traversing method.

int main() {
    vector <int> v(10);
    //Vector input from user
    for(int i=0; i<10; i++) {
        cout<<"Enter a value: ";
        cin>>v[i];
    }
    // Print the vector
    for (int i=0; i<10; i++) {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    int x;
    cout<<"Enter the element whose last occurance is reqd: ";
    cin>>x;

    int ans=0;

    for (int i=0; i<(v.size());i++) {
        if (x==v[i]) {
            ans = i;
        }
    }
   
    cout<<"Last occurance of element "<<x<<" is: "<<ans;
    return 0;
}