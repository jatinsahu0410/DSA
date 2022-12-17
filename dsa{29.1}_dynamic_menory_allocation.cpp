//creating a 2d variable arr with same no. of row and no. of col
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of columns: ";
    cin>>n;

    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    // taking input in the array
    cout<<"Enter the elements of 2D array: ";
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // printing the 2D array 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}