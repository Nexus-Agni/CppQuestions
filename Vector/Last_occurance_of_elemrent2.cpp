#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> v(10);
    //Input from user
    for (int i=0; i<10; i++) {
        cout<<"Enter a value: ";
        cin>>v[i];
    }
    //Printing vector
    for (int i=0; i<10; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the variable whose occurance is reqd: ";
    cin>>x;
    int ans=0;
    for (int i=10; i>0; i--) {
        if (x==v[i]) {
             ans = i;
            break;
    } }
    cout<<"Last occurance of "<<x<<" is : "<<ans;
    return 0;
}