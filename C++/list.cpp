#include<iostream>
#include<list>
using namespace std;

//bidirectional linked list
void display(list<int> &l1){
    list<int> :: iterator iter;
    for(iter = l1.begin() ;iter!=l1.end() ; iter++){
    cout<<* iter << " ";}
    cout<<endl;
}
int main(){
list<int> list1;  //0 length list that is we can add any number of elements
for(int i = 0; i <5 ; i++){
    int element;
    cout<<"Enter element : ";
    cin>>element;
    list1.push_back(element);
}
list<int> list2(2); //2 length list initialized with 0 and  can take up only 2 values
list<int> :: iterator iter;
// display(list2);  // 0 0 would be printed
iter = list2.begin();

*iter = 34;
iter++;     //it would now point to the next element of list2.

*iter = 78;
iter++;
*iter = 96;      //won't be inserted into the list as list can take up only 2 values
iter++;
list2.sort();
list1.merge(list2); //merges list1 with list2 and stores the list in list1
display(list1);
list1.remove(34); //removes the element given
display(list1);
list1.reverse();   //reverses the list
display(list1);
display(list1);
cout<<list1.size();  //no of elements that are inserted..
// list1.swap(list2);  //both  the list should be of same capacity try making list2 of size 5
// display(list1);

// display(list1);
return 0;
}