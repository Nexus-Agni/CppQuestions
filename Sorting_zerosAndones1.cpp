#include<iostream>
#include<vector>
using namespace std;
// Sorting Zeros and Ones without function
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector <int> v;
    //Array input
    int ele;
    for (int i=0; i<n; i++) {
        cout<<"Enter either 0 or 1: ";
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Unsorted array is: ";
    //Printing unsorted array
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    //Finding number of 0s
    int count=0;
    for (int i=0; i<n; i++) {
        if (v[i]==0) {
            count++;
        }
    }
    //Sorting 
    for (int i=0; i<n; i++){
        if (i<count) {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    cout<<endl;
    cout<<"Sorted array is: ";
    //Printing sorted array
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}