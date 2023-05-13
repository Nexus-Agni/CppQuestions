#include<iostream>
#include<vector>
using namespace std;

//Rotating an array by K steps without using REVERSE operation

int main() {
   int array[]={1,2,3,4,5};
   int n= (sizeof(array)/sizeof(array[0]));
   int k=3;
   k = k%n; //If k > n
   int j=0;
   int newarray[n];

   // Insering k elements
   for (int i=n-k; i<n; i++) {
        newarray[j]=array[i];
        j++;
   }
   
   // Inserting n-k elements
   for(int i=0; i<n-k; i++) {
        newarray[j]=array[i];
        j++;
   }

   //Priting the final result
   for (int i=0; i<n; i++) {
        cout<<newarray[i]<<" ";
   }
    return 0;
}