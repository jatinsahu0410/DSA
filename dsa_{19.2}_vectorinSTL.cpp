// Vector in STL 
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    cout<<"The size of the vector:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Now the capacity will be: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Now the capacity will be: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Now the capacity will be: "<<v.capacity()<<endl;

    cout<<"The size of the vactor is: "<<v.size()<<endl;

    cout<<"Element at 2nd INdex: "<<v.at(2)<<endl;
    cout<<"Before pop: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"After pop: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear: "<<v.size()<<endl;

    vector<int> a(5,2);
    cout<<"Print the vector: ";
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}