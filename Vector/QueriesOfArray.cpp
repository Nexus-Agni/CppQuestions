#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    vector <int> v(5); // Taking array input 
    cout<<"Enter the size of array: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Enter the array input: ";
        cin>>v[i];
    }
    // Creating frequency array
    const int N= 1e5 + 10;
    vector<int> freq(N,0);
    for (int i=0; i<n; i++) {
        freq[v[i]]++;
    }

    int q; //Taking query input
    cout<<"Enter the number of queries: ";
    cin>>q;

    for(int i=0; i<q; i++) {
        cout<<"Enter the query:";
        int query;
        cin>>query;
        if(freq[query]>0) {
            cout<<"Query is present "<<freq[query]<<" times"<<endl;
            
        }
        else{
            cout<<"Query is absent"<<endl;
        }
    }

    return 0;
}