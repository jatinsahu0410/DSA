// INsertion sort 
#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/*
void insertionsort(int arr[], int n){
    for(int i=1; i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                // shift 
                arr[j+1]=arr[j];
            }else{ //stop
            break;
            }
        }
        arr[j+1]=temp;
    }
    printarray(arr, n);
}
*/
void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                //shift that is right shift or left shift
                arr[j+1]=arr[j];
                j--;
            }else{
                // stop
                break;
            }
        }
        arr[j+1]=temp;
    }
    printarray(arr, n);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[10];
    cout<<"Enter the array of your choice: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };

    cout<<"The array before sorting is: ";
    printarray(arr,n);

    cout<<"The array after bubble sorting: ";
    insertionsort(arr, n);
}