#include<iostream>
using namespace std;
// Reference variables in C++ works like pointers. Reference variables are used 
// to give alternative names to a variable.
void swap(int &x , int &y){      // x and y are reference variables
        int temp;                // x and a means the same , y and b means the same
        temp = x;
        x = y;
        y = temp;
}



int main(){
    int a, b;
    cout<<" Enter values of a and b"<< endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"After swapping value of a is "<<a<<" and value of b is "<<b;

}
