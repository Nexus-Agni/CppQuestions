#include<iostream>
#include<vector>
using namespace std;

// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

int main() {
    vector <int> v;
    v = {1,2,6,3,1,2,4,3,4,5,5};
   
    for (int i=0; i<(v.size()); i++) {
        for (int j=i+1; j<(v.size()); j++) {
            if(v[i]==v[j]) {
                v[i]=v[j]=-1;
            }
        }
    }
    for(int i=0; i<(v.size()); i++) {
        if(v[i]>0) {
            cout<<v[i];
        }
    }

    return 0;
}