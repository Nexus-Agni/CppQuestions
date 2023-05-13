#include<iostream>
#include<vector>
using namespace std;
// Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.
void SoringByParity (vector<int> &v) {
    int left_ptr=0; 
    int right_ptr=v.size()-1;
    while (left_ptr<right_ptr) {
        if (v[left_ptr]%2==1 && v[right_ptr]%2==0) {
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr]%2==0) {
            left_ptr++;
        }
        if (v[left_ptr]%2==1) {
            right_ptr--;
        }
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    //Array input
    vector<int> v;
    int ele;
    for(int i=0; i<n; i++) {
        cout<<"Enter an integer: ";
        cin>>ele;
        v.push_back(ele);
    }
    //Printing Unsorted array
    cout<<"Unsorted Array is: ";
    for (int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    SoringByParity(v);
    //Printing sorted array
    cout<<endl;
    cout<<"  Sorted Array is: ";
    for (int ele:v) {
        cout<<ele<<" ";
    }
    return 0;
}