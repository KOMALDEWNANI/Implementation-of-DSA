#include<iostream>
using namespace std;
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
    
