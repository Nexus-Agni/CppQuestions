#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v;
    for (int i=0; i<=5; i++) {
        int element;
        cout<<"Enter an element: ";
        cin>>element;
        v.push_back(element);
    }

    // Using for loop
    for(int i=0; i<=5; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // Using for each loop
    for(int ele:v) {
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}