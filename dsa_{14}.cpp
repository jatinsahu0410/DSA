// Square root using binary search
#include<iostream>
using namespace std;
int squareroot(int n){
    int s=0, e= n;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        int square = mid*mid;
        // if the product is not in the range of integer than we can come into error so we can use long long int for large numbers.
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s= mid+1;
        }else{
            e = mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double exactsquareroot(int n, int precision, int temp){
    double factor =1;
    double ans= temp;
    for(int i=0; i<precision; i++){
        factor =factor/10;
        //0.1
        //0.01
        //0.001
        for(double j=ans; j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The squareroot in integer part of the number is:"<<squareroot(n);

    int temp = squareroot(n);
    cout<<"The exact square root of the number is: "<<exactsquareroot(n, 9, temp);
}