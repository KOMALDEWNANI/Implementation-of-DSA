#include<iostream>
// arr[] is an array of size N k is no of places by which it is to be rotated counter clockwise
// 1. Reverse first k elements.
// 2. Reverse rest of the elements.
// 3. Reverse entire array 
// Time Complexity O(N)
using namespace std;
int reverse(int arr[], int start, int end ){
    int temp;
    
    if(start>=end)
     return 0;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    return reverse(arr,start+1,end-1);
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k,N=10;
    cout<<"enter number of rotations to be done in counter clockwise direction";
    cin>>k;
    reverse(arr ,0 , k-1);
    reverse(arr , k , N-1);
    reverse(arr, 0 , N-1);
    // For clockwise rotation
    //reverse(arr, 0 , N-1);
    //reverse(arr , k , N-1);
    // reverse(arr, 0, k-1);
    cout<<" array after rotation is";
    for(int i = 0; i < N ; i++)
         cout<<arr[i]<<" ";


}
