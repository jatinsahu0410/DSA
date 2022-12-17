#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p=&num;
    int *q=0;
    q=&num;
    cout<<num<<endl;
    cout<<*p<<endl;
    int *ptr=&num;
    cout<<"value is"<<*ptr;
    cout<<ptr<<endl;
    cout<<" size of integer"<<sizeof(num)<<endl;
    cout<<"The size of pointer"<<sizeof(ptr)<<endl;
    cout<<q<<endl;
    int *a=&num;
    cout<<"before"<<num<<endl;
    (*p)++;//increament
    cout<<"after"<<num<<endl;
    // copy one pointer to another
    int *b=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<p<<endl;
    int *t=&num;
    *t=(*t)+1;
    cout<<"Print print"<<*t;
}