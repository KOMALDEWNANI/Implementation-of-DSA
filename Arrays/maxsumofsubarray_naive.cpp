#include<iostream>
using namespace std;
// Algorithm:
// 1. arr[] is an array of N elements. k is the length of subarray. We need to find maximum sum of k consecutive elements in the array
// 2. Let max_sum = 0
//        
//        for(i = 0 ; i < N-k ; i++){ (i is taken till N - k as the second for loop will go from i to i+k-1 so there should be k elements in subarray and we don't want index out of range )
            //   window_sum=0
//            for(j = i ; j < i + k ; j ++ ){
//                window_sum = window_sum + arr[j]
               
//            }
//            if(window_sum >= max_sum){
//                    max_sum = window_sum
//                }
//        }
// 3. Print out maximum sum max_sum
// Time Complexity = O(N*k)

int main(){
    int arr[10] = {0,2,3,11,5,6,7,8,9,10};
    int max_sum = 0, window_sum , N = 10;
    int i , j , k;
    cout<< "ENTER LENGTH OF SUBARRAY";
    cin>>k;
    for(i = 0 ; i <= N-k ; i++){
           window_sum = 0;
           for(j = i ; j < i + k ; j ++ ){
               window_sum = window_sum + arr[j];
               
           }
           if(window_sum >= max_sum){
                   max_sum = window_sum;
               }
       }

cout<<" Maximum sum of subarray is "<< max_sum;
    
}