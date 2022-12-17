#include<iostream>
using namespace std;
void waveprint(int arr[3][4], int n, int m){
    for(int col;col<n;col++){
        if(col&1){
            //odd index ---> bottom to top
            for(int row=n-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            //even index ----> top to bottom
            for(int row=0;row<n;row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}
int main(){
    int arr[3][4];
    cout<<"Enter the elements of the 2D array:";
    // taking input in 2d array
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cin >> arr[i][j];
            }
        }

        cout<<"Print the array in the wave pattern:"<<endl;
        waveprint(arr,3,4);
}