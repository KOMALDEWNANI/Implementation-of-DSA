#include<iostream>
using namespace std;
//templates are used for generic programming so that wedon't need to make our function for all data types seperately.
template <class T1 , class T2>
float avg(T1 a , T2 b){
    float avg = (a+b)/2.0 ; 
    return avg;
}
// float avg(int a , float b){
//     float avg = (a+b)/2.0 ; 
//     return avg;
// }
// float avg(float a , int b){
//     float avg = (a+b)/2.0 ; 
//     return avg;
// }
// float avg(float a , float b){
//     float avg = (a+b)/2.0 ; 
//     return avg;
// }

int main(){
    
    
    float avg1 =avg(2.8, 3.5);
    cout<< "Average is : "<<avg1;

return 0;
}