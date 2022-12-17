// basics of STL
// STL standard template library 
#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[4]={1,3,4,6};

    array<int,4> a={2,4,5,6};
    int size= a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"The size of the array is: "<<size<<endl;
    cout<<"Element at 2nd Index : "<<a.at(2)<<endl;
    // the array is static not dynamic  
    cout<<"Empty or not: "<<a.empty()<<endl;
    cout<<"first element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
}