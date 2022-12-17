// stack in c++
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("atomic");
    s.push("habits");
    s.push("by");
    s.push("james");
    s.push("Clear");

    cout<<"The top element is: "<<s.top()<<endl;

    s.pop();
    cout<<"Now the top element is: "<<s.top()<<endl;
}
