//creating  dynamic 2d array different number of columnn and rows
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter the number of columns: ";
    cin>>col;
    
    // creating dynamic 2d array 
    int** arr= new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    // Taking input to the Dynamic 2D array 
    cout<<"Enter the elements of the 2D array: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // Printing th array:
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing memory
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
}