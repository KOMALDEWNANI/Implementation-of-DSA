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
int gcd(int n, int k){
    int gcd;
    for(int i=k; i>=1;i--){
        if(n%i==0 && k%i==0 )
        {
            gcd=i;
            break;
        }
    }
    return gcd;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8, 9,10,11,12};
    int k, N = 12;
    cout<<" Enter number of places by which you want to rotate";
    cin>>k;
    int i,j;
    int g = gcd(N,k);
    
    // If gcd is less than 1 then we need to simply left rotate all the elements in the array
    for(i=0; i<g;i++){
        int temp=arr[i];
        for(j=i; j<N-k ; j+= k){
            arr[j] = arr[(j+k)%N];  //modulo is generally used for cyclic operations....


        }
        arr[j]=temp;
    }
    

    cout<<"Array after rotation is";
    for(int i=0;i<N;i++){
        cout<<arr[i];
    }



}