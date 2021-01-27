#include<iostream>
using namespace std;
// Algorithm:
// arr[] is an array with N number of elements. WE need to rotate the array by k places to the left.
// 1. Create GCD(N,k) number of sets in the array arr[](elements of each set in arr[] will be at k distance from each other).
// 2. If gcd is greater than 1 then:
// i. Left rotate the elements of the corresponding set.
// ii.  Repeat step 2 with all the sets made.
// 3. If gcd is equal to one then simply left rotate the array by k places(Use rotation_of_array_2)

// Time Complexity - O(N)
int gcd(int a, int b){
    if(b==0)
       return a;
    else
    {
        return gcd(b , a%b);
    }
    
    
}


int main(){
    int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int k, N = 12;
    cout <<" Enter number of places by which you want to rotate";
    cin>>k;
    int i,j;
    int g = gcd(N,k);
    
    
    // If gcd is equal to  1 then we need to simply left rotate all the elements in the array
    for(i = 0 ; i < g ; i++){        //no of sets
        int temp = arr[i];
        int j = i ;
        
        while(true){                //make j = i and find d , if(d !=0) then arr[j] = arr[d] and j = d , else arr[j] = temp and exit from inner loop
        int d = (j + k) % N;        // Take k in case of counter clockwise and N-k in case of clockwise
        if( d != i){
            arr[j] = arr[d];
            j = d;
            continue;
        }
        else{
            arr[j] = temp;
            break;
        }}
        
        
            
        }

        
        
    
    

    cout<<"Array after rotation is";
    for(int i=0;i<N;i++){
        cout<<arr[i];
    }



}