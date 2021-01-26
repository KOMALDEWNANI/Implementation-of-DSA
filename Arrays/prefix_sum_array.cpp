#include<iostream>
using namespace std;
// Algorithm:
// arr[] is an array of size N. We need to create a prefix sum array.
// pr_sum is prefix_sum array of size N. 
// 1. pr_sum[0] = arr[0]
// 2. Find the prefix sum of each element of arr and store it in the corresponding position in pr_sum and repeat till the last element of arr[]

// Time Complexity - O(N)
int main(){
    int arr[5] = {10 , 20, 30, 40 , 50};
    int pr_sum[5];
    int N=5;
    pr_sum[0]=arr[0];
    for(int i=1 ; i< N ;i++)
        {
            pr_sum[i]=pr_sum[i-1]+arr[i];
        }

cout<<" Prefix sum array \n";
for(int i=0; i <N ; i++){
    cout<<pr_sum[i]<<" ";
}

}
