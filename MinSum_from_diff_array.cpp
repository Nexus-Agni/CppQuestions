#include<iostream>
#include<algorithm>
using namespace std;

// find the minimum sum of two elements such that they belong to different arrays and are not at the same index.

int main() {
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};

    int min_a = min_element(a,a+5);
    cout<<"Min element of a is : " << a[min_a];

    return 0;
}