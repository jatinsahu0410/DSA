//roatate a 2d vector
#include<iostream>
#include<vector>
using namespace std;
void print2dvect(vector<vector<int>>arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    };
}
vector<vector<int>> rotate(vector<vector<int>> &v){
    int row=v.size();//4
    int col=v[0].size();//3
    int t= row-1;
    vector<vector<int>>result(col,vector<int>(row));
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            // result[i][j]=v[t-i][j];// for 180 degree
            result[i][j]=v[t-j][i]; // for 90 degree
            // result[i][j]=v[j][t-i];
        }
    }
    return result;
    }
int main(){
    vector<vector<int>>brr={{1,2,4,8,7},{4,5,8,6,3},{8,9,0,8,7}};
    print2dvect(brr);
    cout<<"After Rotation"<<endl;
    print2dvect(rotate(brr));
}