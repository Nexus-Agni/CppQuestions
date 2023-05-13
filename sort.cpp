#include <iostream>
#include <algorithm>  // for std::sort

int main() {
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);  // calculate the size of the array

    std::sort(arr, arr + n);  // sort the array using std::sort

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
