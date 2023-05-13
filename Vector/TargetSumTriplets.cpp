#include<iostream>
#include<vector>
using namespace std;

//Find the total number of Triplets in the Array whose sum is equal to the given value x (Target Sum).

int main() {
    vector <int> v;
    int x=5; // Target sum
    v={3,1,2,4,0,6};
    
    //Problem solving part
    int ans=0;
    for(int i=0; i<(v.size()); i++) {
        for(int j=(i+1); j<(v.size()); j++){
            for(int k=(j+1); k<(v.size()); k++) {
                if(v[i]+v[j]+v[k]==x) {
                    ans++;
                }
            }
            }
        }
    
    cout<<ans;
    return 0;
}