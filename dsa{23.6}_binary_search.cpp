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
//function for binary search in which the array is sorted in row wise
bool searchmatrix(vector<vector<int>> &v, int key){
    int row=v.size();
    int col=v[0].size();
    int s=0;
    int e=row*col-1;

    int mid=s+(e-s)/2;
    while(s<=e){
        int element= v[mid/col][mid%col];
        if(element=key){
            return mid;
        }
        if(element<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
};
int anu(vector<vector<int>>v,int key){
    if(searchmatrix(v,key)==-1){
        cout<<"the key is not present.";
    }else{
        cout<<"the key is present.";
    }
}
// function for binary search in which the array is sorted in both the direction 
bool binarymatrix(vector<vector<int>> &v, int key){
    int row=v.size();
    int col=v[0].size();
    int rowindex=0;
    int colindex=col-1;
    while(rowindex<row&& colindex>=0){
        int element=v[rowindex][colindex];

        if(element==key){
            return 1;
        }
        if(element<key){
            rowindex++;
        }else{
            colindex--;
        }
    }
    return 0;
}
int anu_2(vector<vector<int>>&v,int key){
    if(binarymatrix(v,key)==0){
        cout<<"the key is not present.";
    }else{
        cout<<"the key is present.";
    }
}
int main(){
    /* vector<vector<int>>arr={{1,2,3,4,5},{6,7,8,9,10}};
    print2dvect(arr);
    int key;
    cout<<"Enter the key:";
    cin>>key;
    anu(arr,key);*/
    vector<vector<int>>arr2={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22}};
    print2dvect(arr2);
    int key;
    cout<<"Enter the key:";
    cin>>key;
    anu_2(arr2,key);
}