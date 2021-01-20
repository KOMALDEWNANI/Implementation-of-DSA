#include<iostream>
using namespace std;
// Algorithm:
// arr[] is an array of size N which is sorted in ascending order we need to search whether k is present or not
// 1. Initialize start=0 and end=N-1
// 2. mid=(end-start)/2
// 3. Find index of middle element access the element compare it with k
// 4. if arr[mid]=k then print element found and exit
// 5. if arr[mid]>k then make end=mid-1 and repeat from step 2.
// 6. if arr[mid]<k then make start=mid+1 and repeat from step 2.

// Time Complexity- O(logN)[Worst case]
// int binarySearch(int arr[],int start,int end,int k){
//     if(start<=end){
//     int mid=(end+start)/2;
//     if(arr[mid]==k)
//       return 1;
//     else if(arr[mid]>k)
//        {
//            end=mid-1;
//            return binarySearch(arr,start,end,k);
//        }
//     else
//     {
//         start=mid+1;
//         return binarySearch(arr,start,end,k);
//     }}
//     return 0;


// }
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key, N=10;
    cout<<"Enter which element you want to search";
    cin>>key;
    int start=0,end=N-1;
    
    
    for(int i=start;i<=end;i++){
       int mid=(end+start)/2;
       if(arr[mid]==key){
           printf("Element found");
           break;
       }
       else if(arr[mid]>key){
             end=mid-1;
             continue;
       }
       else{
           start=mid+1;
           continue;
       }

    }
    if(start>end){
        printf("Element not found");

    }
    
    return 0;

}