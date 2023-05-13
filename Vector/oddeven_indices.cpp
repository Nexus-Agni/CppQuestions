#include<iostream>
#include<vector>
using namespace std;

//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

int main() {
    vector <int> v = {0,1,2,3,4};
    int oddsum=0;
    int evensum=0;
    for (int i=0; i<(v.size()); i++) {
        if (i%2==0) {
            evensum = evensum + v[i];
        }
        else {
            oddsum = oddsum + v[i];
        }
    }
    int ans = evensum - oddsum;
    cout<<"Difference b/w sum of elements at even and odd indices are: "<<ans;
    return 0;
}