#include<iostream>
#include<vector>
using namespace std;

// To check whether an element is sorted or not.

int main() {
    vector <int> v={1,2,3,4,5,69,6,7,8,9,10};
    bool flag=true;
    for (int i=1; i<(v.size());i++) {
        if (v[i]<=v[i-1]) {
            flag=false;
        }
    }
    if(flag==true) {
        cout<<"Vector is sorted"<<endl;
    }
    else{
        cout<<"Vector is not sorted"<<endl;
    }
    return 0;
}