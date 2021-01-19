#include<iostream>
using namespace std;
//Algorithm:
// arr[] is an array of size N 
// Using temporary array temp of size N:
// 1. Initialiaze temp with elements in arr[] in reverse manner.
// 2. Modify arr by equating it with temp. i.e., arr=temp.
// Time Complexity - O(N)
// Space Complexity(Auxilary) - O(N)
int main(){
    int arr[10], temp[10];
    int i, N=10;
    cout<<" Enter 10 elements of array";
    for(i=0;i<N;i++){
        cin>>arr[i];
        temp[N-i-1]=arr[i];
    
    }
    for(i=0;i< N;i++){
        arr[i]=temp[i];
    }
    cout<<"Reverse of array is ";
    for(i=0 ; i<N ; i++){
       cout<<arr[i]<<" ";
    }

}