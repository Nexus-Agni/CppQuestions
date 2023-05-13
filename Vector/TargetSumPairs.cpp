#include<iostream>
#include<vector>
using namespace std;

//Find the total number of pairs in the Array whose sum is equal to the given value x (Target Sum).

int main() {
    vector <int> v(5);
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    //Vector input
    for (int i=0; i<5; i++) {
        cout<<"Enter a value: ";
        cin>>v[i];
    }
    //Problem solving part
    int ans=0;
    for(int i=0; i<(v.size()); i++) {
        for(int j=(i+1); j<(v.size()); j++){
            if(v[i]+v[j]==x) {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}