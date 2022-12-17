// pointer with function
#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
    cout<<p<<endl;
}
void update(int *p){
    p=p+2;
    cout<<"inside the update function: "<<p<<endl;
}
void valueupdate(int *p){
    *p=*p+4;
    cout<<"the value update is"<<*p<<endl;
}
int getsum(int *arr, int n){ //arr[]=*arr this is actually pointer 
    cout<<"The size is: "<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int value=5;
    int *p=&value;

    print(p);
    // update
    cout<<"before"<<p<<endl;
    update(p);
    cout<<"after"<<p<<endl;
    //this both will give same value
    // but we can update the value 
    valueupdate(p);

    int arr[5]={1,3,4,5,6};
    cout<<"the sum is: "<<getsum(arr,5);
    cout<<"the sum is: "<<getsum(arr+2,2);
}