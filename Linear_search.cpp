#include<iostream>
using namespace std;

// Search if a given element is present in the array or not. If it is not present then return -1 else return the index.

int main() {
    int n;
    cout<<"Enter the number of elements required in the array: ";
    cin>>n;
    int array[n];
    for (int i=0; i<n; i++ ) {
        cout<<"Enter a value: ";
        cin>>array[i];
    }
    int r;
    cout<<"Enter the number to be searched in the array: ";
    cin>>r;

    for (int i=0; i<n; i++) {
        if (r==array[i]) {
            cout<<r<<" is present in "<<i<<"th index"<<endl;
            break;
        }
        else if (i==n) {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}