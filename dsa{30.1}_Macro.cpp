#include<iostream>
using namespace std;
int d=0; // Global variable
#define pi 3.14
int main(){
    int r; // Local variable 
    cout<<"Enter the Radius of the circle: ";
    cin>>r;
    // double PI=3.14;
    double area = pi*r*r;
    cout<<"the area of the cicle is: "<<area<<endl;;
    cout<<"The value of D is : "<<d;
}