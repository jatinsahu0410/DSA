// Queue in C++
#include<iostream>
#include<queue>
using namespace std;
int main(){
    /*
    queue<string> q;

    q.push("Atomic");
    q.push("habits");

    cout<<"The first element is: "<<q.front()<<endl;
    q.pop();
    cout<<"Now the first element is: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    */
    
    //max heap
    priority_queue<int>max1;
     //min heap
     priority_queue<int,vector<int>, greater<int> > min1;

     max1.push(1);
     max1.push(3);
     max1.push(4);
     max1.push(0);
     cout<<"the size of queue is: "<<max1.size()<<endl;

     int n=max1.size();
     for(int i=0;i<n;i++){
        cout<<max1.top()<<" ";
        max1.pop();
     }cout<<endl;


      min1.push(1);
      min1.push(8);
      min1.push(4);
      min1.push(3);

      int m=min1.size();
     for(int i=0;i<m;i++){
        cout<<min1.top()<<" ";
        min1.pop();
     }cout<<endl;

     cout<<"Empty: "<<min1.empty()<<endl;
}
