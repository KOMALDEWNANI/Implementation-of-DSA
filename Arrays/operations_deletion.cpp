#include<iostream>
using namespace std;
// Algorithm:
// 1.arr[] is the array of initial size N and length len, k is the element to be deleted.
// 2. To check whether element to be deleted is present or not traverse through the array access each element, compare 
//    with k if it's equal note the index in the variable idx 
// 3. If element to be deleted is not present then exit
// 4. If element is present then,
//    i. Shift all the elements after index idx to the left by one place.
//    ii. Decrease len by 1
// Time Complexity- O(N) since we may need to shift all the elements to the left by one place.
int main(){
    int arr[10] = {1,2,3,4,5,6};//len=6
    int num, idx, i, len = 6;
    cout<<"Enter the element you want to delete";
    cin>>num;
    for(i=0;i<len;i++){
        if(arr[i]==num){
          idx=i;
          break;}
          
    }
    if(i != len){
        for(i=idx+1;i<len; i++){
            arr[i-1]=arr[i];
            
        }
        len--;
    }
    //For printing array on screen
    for(int i=0;i<len;i++)
       cout<<arr[i];
    return 0;

    
}