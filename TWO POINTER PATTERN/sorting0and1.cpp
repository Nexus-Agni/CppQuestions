#include<iostream>
#include<vector>
using namespace std;

void sortingZerosAndOnes(vector <int> &v) {
    int left_ptr=0;
    int right_ptr = v.size()-1;
    while(left_ptr<right_ptr) {
        if (v[left_ptr]==1 && v[right_ptr]==0) {
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++; 
            right_ptr--;
        }
        if (v[left_ptr]==0)
        {
            left_ptr++;
        }
        if (v[right_ptr]==1)
        {
            right_ptr--;
        }
    }

    return;
}

int main() {
    vector <int> v;
    v = {1,1,1,0,1,0,0};

    //Printing the unsorted array
    cout<<"Unsorted array is : "<<endl;
    for (int ele: v) {
        cout<<ele<<" ";
    }
    cout<<endl;
    sortingZerosAndOnes(v);

    // Printing the sorted array
    cout<<"Unsorted array is : "<<endl;
    for (int ele:v) {
        cout<<ele<<" ";
    }
    
    return 0;
}