#include<iostream>
using namespace std;

// Find the second largest element in an array

int main() {
    int array[]={1,2,3,4,5,5,6,7,7,7};
    int size;
    size = sizeof(array)/sizeof(array[0]);
    int max=array[0]; //Considering all array elements are positive
    
    //Finding max element in the array
    for (int i=0; i<size; i++) {
        if(array[i]>max) {
            max = array[i];
        }
    }
    cout<<"Largest element of array is : "<<max<<endl;

    //Finding second largest element
    for(int i=0; i<size; i++) {
        if (array[i]==max) {
            array[i]=-1; //Considering all array elements are positive
        }
    }
    int second_max=0;
    for (int i=0; i<size; i++) {
        if(array[i]>second_max) {
            second_max = array[i];
        }
    }
    cout<<"Second largest element of the array is : "<<second_max;

    return 0;
}