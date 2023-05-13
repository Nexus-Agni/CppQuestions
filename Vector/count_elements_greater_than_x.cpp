#include<iostream>
#include<vector>
using namespace std;

// Count number of elements greater than x

int main() {
    vector <int> v(10);
     for (int i=0; i<(v.size()); i++) {
        cout<<"Enter a value: ";
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int ans=0;
    for (int i=0; i<(v.size());i++) {
        if (v[i]>x) {
            ans++;
        }
    }
    cout<<"Number of elements greater then x are: "<<ans;
    return 0;
}