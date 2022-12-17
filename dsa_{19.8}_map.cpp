//map
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="jatin";
    m[2]="Sahu";
    m[3]="is";
    m[4]="is";
    m[5]="of";
    m[6]="physics";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}