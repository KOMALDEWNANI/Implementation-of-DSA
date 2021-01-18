#include<iostream>
#define N 10
using namespace std;
int main(){
    int arr[N] = {1,2,3,4,5}, len=5; //let's consider we have an array of length 5 and initial size 10
    
    int key,position;
    
    cout<<"Enter element to insert";
    cin>>key;
    cout<<"Enter at which position you want to enter";//should be less than len to insert in between elements(for adding at end ignore writing this statement)
    cin>>position;
    if(N == len){
        printf("Array Full, Cannot insert");
        return 0;}
    // else
    // {   //for inserting at end
    //     arr[len] = key;
    //     len++;
    //     printf("Element Added\n");  //We can insert elements till array becomes full
        
    // }
    else{
        //adding at specified position
        int idx=position-1;
       for(int i=len-1;i>=idx;i--){
           arr[i+1]=arr[i];
       }
       arr[idx] = key;
       len++;
    }
    //For printing array on screen
    for(int i=0;i<len;i++)
       cout<<arr[i];
    return 0;
    }



      

    



    
    


