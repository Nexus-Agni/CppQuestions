#include<iostream>
#include<vector>
using namespace std;
// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order (No.can be negetive also)
void squareSorting(vector<int> &v) {
    vector <int> ansArr;
    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while (left_ptr < right_ptr)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr])) {
            ansArr.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else {
            ansArr.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    
     cout<<"Sorted array: ";
     for (int ele: ansArr) {
        cout<<ele<< " ";
    }
    
    return;
}
int main() {
    vector <int> v;
    v = {-10,-2,3,5,6};
    // Unsorted array
    cout<<"Unsorted array is : ";
    for (int ele:v) {
        cout<<ele<< " ";
    }
    cout<<endl;

    squareSorting(v);
   

    return 0;
}