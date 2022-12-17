//deque in STL
#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int>d;

    d.push_back(1);
    d.push_front(3);

    cout<<"Print the Que: ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    cout<<"Now the array will be: ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The element of 1st index is: "<<d.at(1)<<endl;
    cout<<"Empty"<<d.empty()<<endl;

    d.erase(d.begin());
    cout<<"The deque will be: ";
}