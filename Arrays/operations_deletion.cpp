#include<iostream>
using namespace std;
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