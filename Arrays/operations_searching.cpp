#include<iostream>
using namespace std;
// Algorithm:
// arr[] is the array of initial size N containing N elements, k is the element to be searched.
// 1. Traverse through the array access each element.
// 2. Compare each element of array with k 
// 3. if any of the element becomes equal to k then print element found and exit.
// 4. if no element is equal to k then print element not found and exit.
// Time Complexity- O(N) in the worst case as we may need to compare all the elements.
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter which element you want to search";
    cin>>key;
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            cout<<"Element Found";
            return 0;
        }
    }
    cout<<"Couldn't find it,Try with something else";
    return 0;
    
    }
    
