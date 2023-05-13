#include<iostream>
#include<vector>
using namespace std;

// Count number of occurances of a particular element.

int main() {
    vector <int> v(10);
      for (int i=0; i<(v.size()); i++) {
        cout<<"Enter a value: ";
        cin>>v[i];
    }
    int x;
    cout<<"Enter the element whose occurance is reqd: ";
    cin>>x;
    int ans=0;
    for (int i=0; i<(v.size()); i++) {
        if (x==v[i]) {
            ans++;
        }
    }
    cout<<"Number of times "<<x<<" is present is: "<<ans;
    return 0;
}