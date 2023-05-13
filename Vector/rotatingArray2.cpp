#include<iostream>
#include<vector>
#include<algorithm> // use for using reverse 
using namespace std;

int main() {
    vector <int> v={1,2,3,4,5};
    int n=v.size();
    int k=2;
    k=k%n; //If k>n
    
    //Reversing operation
    reverse(v.begin(),v.end()); //5 4 3 2 1
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k, v.end());
    
    // Printing array using for each loop
    for (int ele:v) {
        cout<<ele<<" ";
    }
    return 0;
}