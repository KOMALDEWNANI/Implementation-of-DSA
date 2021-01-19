#include<iostream>
using namespace std;
//Algorithm:
// 1. Iterative solution
// arr[] is an array of size N 
// 
// 1. Initialize start= 0 and end= N-1 (can also skip creating end)
// 2. Traverse through array from both sides
//    3. Swap arr[start] and arr[end](arr[N-start-1])
//    4. start=start+1
//       end= end -1
//    5. Repeat steps 2-4 till you reach middle of the array or start>=end
// Time Complexity - O(N)

// 2. Recursive solution
// 1. Initialize start = 0 and end = N-1
// 2. Swap arr[start] and arr[end]
// 3. Swap rest of the elements recursively
// Time Complexity - O(N)

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
    int arr[10];
    int i, N=10;
    cout<<" Enter 10 elements of array";
    for(i=0;i<N;i++){
        cin>>arr[i];
        
    
    }
    // for(i=0;i< N/2;i++){
    //     int temp=arr[i];
    //     arr[i]=arr[N-i-1];
    //     arr[N-i-1]=temp;
    // }
    reverse(arr,0,N-1);
    cout<<"Reverse of array is ";
    for(i=0 ; i<N ; i++){
       cout<<arr[i]<<" ";
    }

}