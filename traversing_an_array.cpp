#include<iostream>
using namespace std;

int main() {
    int array[]={1,2,3,4,5};

    // Using for loop (Index is used for traversing)
    for (int i=0; i<(sizeof(array)/sizeof(array[0]));i++) {
        cout<<array[i]<<endl;
    }

    // Using for each loop (Elements are used for traversing)
    for (int ele : array) {
        cout<<ele<<endl;
    }

    // Using while loop (Index is used for traversing)
    int j=0;
    while (j<(sizeof(array)/sizeof(array[0]))) {
        cout<<array[j]<<endl;
        j++;
    }

    // Taking input in an array
     
    char vowels[5];

    // Using for loop 
    for (int i=0; i<5; i++) {
        cin>>vowels[i];
    }

    // Using for each loop
    for (char &ele:vowels) {
        cin>>ele;
    }

    // Printing the array elements
    for (int j=0; j<5; j++) {
        cout<<vowels[j]<<" ";
    }

    return 0;
}