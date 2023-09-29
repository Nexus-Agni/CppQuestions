#include<iostream>
#include<vector>
using namespace std;

void sortingEvenOdd(vector <int> &v) {
    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<right_ptr) {
        if (v[left_ptr]%2!=0 && v[right_ptr]%2==0) {
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr]%2==0) {
            left_ptr++;
        }
        if (v[right_ptr]%2!=0) {
            right_ptr--; 
        }
    }

    return ;
}

int main() {
    vector <int> v;
    v = {1,2,3,4,5,6,7,8,9,10};
    //print unsorted array
    cout<<"Unsorted array: ";
    for (int ele: v) {
        cout<<ele<<" ";
    }
    cout<<endl;

    sortingEvenOdd(v);
    // printing sorted array
    cout<<"Sorted array: ";
    for (int ele: v) {
        cout<<ele<<" ";
    }

    return 0;
}