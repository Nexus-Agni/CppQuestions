#include <iostream>
#include <algorithm>  // for std::sort
using namespace std;

int main() {
    int arr[] = {4,100,200,7,6,500,8};
    int n = sizeof(arr) / sizeof(arr[0]);  // calculate the size of the array

    sort(arr, arr + n);  // sort the array using std::sort

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    return 0;
}
