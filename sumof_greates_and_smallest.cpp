#include<iostream>
using namespace std;

// Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array.
// Without using max and min functions.
int main() {
    int array[]={6,7,8,9,10};
    int max=0;
    

    for(int i=0; i<5; i++) {
        if (array[i]>max) {
            max = array[i];
        }
    }
    cout<<"Maximum number is: "<<max<<endl;
    int min=max;
    for(int i=0; i<5; i++) {
        if (array[i]<min) {
            min = array[i];
        }
    }
    cout<<"Minimun number is: "<<min<<endl;

    int result=max+min;
    cout<<"Sum of max and min numbers are: "<<result<<endl;

    return 0;
}
