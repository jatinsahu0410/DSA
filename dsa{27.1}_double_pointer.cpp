// pointer in depth 
#include<iostream>
using namespace std;
void update(int **p){
    //cases;
    // p=p+1;
    // *p=*p+1; // change hoga : yes in p 
    **p=**p+7;// yes it will change in i 
}
int main(){
    int i=9;
    int *p=&i;
    int **p2=&p;

    cout<<"value at p2:"<<p2<<endl;
    cout<<"value at p2 that is p: "<<*p2<<endl;
    cout<<"address of p2"<<&p2<<endl;
    cout<<*p<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;   //this all will give same value 
    cout<<**p2<<endl;
    //for printing the address of i
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    //for printing the address of p
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<endl<<endl;
    cout<<"before: "<<i<<endl;
    cout<<"before: "<<p<<endl;
    cout<<"before: "<<p2<<endl;
    update(p2);
    cout<<"after: "<<i<<endl;
    cout<<"after: "<<p<<endl;
    cout<<"after: "<<p2<<endl;

}