//merge an array
#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    //copy elements of first array 
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    //copy elements of 2nd array
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[5]={1,2,5,7,8};
    int arr2[3]={3,4,9};

    int arr3[8]={0};
    merge(arr1, 5, arr2,3, arr3);

    print(arr1,5);
    print(arr2,3);
    print(arr3,8);
    
}