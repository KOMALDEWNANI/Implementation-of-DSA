#include<iostream>
#define N 10
using namespace std;
// Algorithm : 
// arr[] is the array of initial size N and length len, k is the element to be inserted.
// 1. Check whether array is full or not.
// 2. If it is full then insertion operation couldn't be performed hence, exit.
// 3. If it has some space left then insertion can be done in two ways->
//        Inserting at the end.
//        Inserting at a specified position.

// 4. For inserting at the end do
//      arr[len]=k; return;
// 5. For inserting at a specific position (Position will be taken as an input)
//      i. index idx= position-1
//      ii. Shift all the elements after and at index idx to the right by one place.
//      iii. Insert k at the specified index.
//      iv.  Increase len by 1

// Time Complexity- O(N) as we may need to shift all the elements to the right.



   
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



      

    



    
    


