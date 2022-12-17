// list or linked list in STL 
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;

    list<int>n(5,12);
    l.push_back(1);
    l.push_front(4);
    l.push_front(5);
    l.push_front(3);

    cout<<"The list is: ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    cout<<"The list after erase: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"the size of the array is: "<<l.size()<<endl;
    cout<<"The n list is : ";
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
}