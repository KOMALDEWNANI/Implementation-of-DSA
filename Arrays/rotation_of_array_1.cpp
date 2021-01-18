#include<iostream>
//Rotation of array using extra space i.e., a temporary array
// Algorithm:-
// arr[] is an array with N number of elements. WE need to rotate the array by k places to the left.
// 1. Create a temporary array, say temp[] and store in it the first k elements of arr[].
// 2. Shift the elements after k to the left by k places.
// 3. Initialize the spaces created at the end of arr[](theoretically) with the k elements in temp in same order.
// Time Complexity- O(N)
// Auxilary Space- O(k)
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int k, N =7;
    cout<<" Enter number of places by which you want to rotate";
    cin>>k;
    int temp[N];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i< N;i++){
        arr[i-2]=arr[i];
    }
    int m=0;
    for(int i=N-k;i<N;i++){
        arr[i]=temp[m];
        m++;
    }
    cout<<"Array after rotation is";
    for(int i=0;i<N;i++){
        cout<<arr[i];
    }



}