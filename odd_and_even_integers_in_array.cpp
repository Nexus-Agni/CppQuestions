#include<iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,7};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    int even=0;
    int odd=0;
    for (int i=0; i<size; i++) {
        if ((arr[i])%2==0) {
            even = even + 1;
        }
        else {
            odd = odd +1;
        }
    }
    cout<<"Even numbers are: "<<even<<endl;
    cout<<"Odd numbers are: "<<odd<<endl;
    return 0;
}