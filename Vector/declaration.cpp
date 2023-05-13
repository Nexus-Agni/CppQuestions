#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"New Size: "<<v.size()<<endl;
    cout<<"New Capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"New Size: "<<v.size()<<endl;
    cout<<"New Capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"New Size: "<<v.size()<<endl;
    cout<<"New Capacity: "<<v.capacity()<<endl;
    v.resize(7);
    cout<<"New Size: "<<v.size()<<endl;
    cout<<"New Capacity: "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"New Size: "<<v.size()<<endl;
    cout<<"New Capacity: "<<v.capacity()<<endl;

    return 0;
}