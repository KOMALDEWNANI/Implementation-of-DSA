#include<iostream>
//Rotation of array using a temporary variable.
// Algorithm:-
// arr[] is an array with N number of elements. WE need to rotate the array by k places to the left.
// 1. Create a temporary variable, say temp and store in it the first element of array.
// 2. Shift the elements after first element to the left by one place.
// 3. Initialize the spaces created at the end of arr[](theoretically) with the temp.
//  4. Repeat steps 1-3 k times.
// Time Complexity- O(N*k)
// Auxilary Space- O(1)
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int k, N =7;
    cout<<" Enter number of places by which you want to rotate";
    cin>>k;
    for(int i=0; i<k;i++){
        int temp=arr[0];
        for(int j=1; j<N;j++){
            arr[j-1]=arr[j];
        }
        arr[N-1]=temp;
    }
    cout<<"Array after rotation is";
    for(int i=0;i<N;i++){
        cout<<arr[i];
    }



}