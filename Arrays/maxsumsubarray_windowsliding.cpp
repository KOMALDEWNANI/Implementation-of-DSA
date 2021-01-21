#include<iostream>
using namespace std;
// Algorithm:
// arr[] is an array of N size . k is the length of the subarray to be considered.
// 1. let window_sum=0
    
// 2. Find sum of first k consecutive elements 
//    for(i = 0; i < k; i++){
//        window_sum = window_sum + arr[i];}
//     max_sum=window_sum
// 3. Graze linearly through the array and keep a track of maximum sum 
// for(i = 1; i <= N-k ; i++){
// 4. calculate the window_sum of next k consecutive elements by subtracting the previous element and adding the new element.
//        window_sum = window_sum - arr[i-1] + arr[i+k];
//        if(window_sum>=max_sum)
//               max_sum=window_sum}

// Time complexity - O(N)
int main(){
    int arr[10] = {2,3,4,5,6,7,8,9,10,12}; 
    int k , N = 10;
    cout<<" Enter length of subarray";
    cin>>k;
    int window_sum , max_sum;
    window_sum =0;
    for(int i=0 ; i<k ; i++){
        window_sum = window_sum + arr[i]; 
    }
    max_sum=window_sum;
    for(int i = 1 ; i<=N-k ; i++){ 
        window_sum = window_sum - arr[i-1] + arr[i+k-1]; 
     //adding new element and subtracting previous to calc sum of next k ele
        if(window_sum>=max_sum){
            max_sum = window_sum;
        }


    }
    cout<<"Maximum sum is "<<max_sum;

}

