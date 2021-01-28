#include<iostream>
#include<vector>
// vectors are dynamic arrays with capability to resize themselves. NO need to specify the size while declaration
using namespace std;
void display(vector<int> &v1){              //reference variable used
    cout<<"Displaying";
    for(int i = 0 ; i < v1.size() ; i++){   //v1.size() gives size of the vector
        //cout<<v1[i];
        cout<<v1.at(i)<<" ";    //the two statements here are same...
    }
}
int main(){
vector<int> v1;        //0-length vector (resize the size when elements are inserted)
vector<int> v2(6);     //6-length vector
vector<int> v3(v1);    // 6 - length vector derived from v2
vector<int> v4(6 , 3);  // 6 length vector of 3s
for(int i = 0; i<5 ; i++){
    cout<<"Enter value  " <<endl;
    int ele;
    cin>>ele;
    v1.push_back(ele);            // inserting at the end...


}
display(v1);
//***********For inserting at middle****************
vector<int>:: iterator iter = v1.begin();        //iter points to beginning of vector , :: is scope resolution operator, iterators are handled like pointers.
v1.insert(iter,2000,2);                          //inserts 2000 copies of 2 at the position pointed by iter
                                                 //if iter then inserts at the beginning ,iter+1 inserts in the position next to beginning of vector




// v1.pop_back();                    // deleting last element...
// display(v1);
// display(v3);
display(v1);
return 0;
}