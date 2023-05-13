#include<iostream>
using namespace std;

int main() {
    int array[]={1,2,3,4,5};
    int size = (sizeof(array)/sizeof(array[0]));
    int sum=0;
    for (int i=0; i<size; i++) {
        sum = sum + array[i];
    }
    cout<<"Sum of array elements are: "<<sum;
    return 0;
}