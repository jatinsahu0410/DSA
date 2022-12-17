//bubble sort
#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool swaped = false;
void bubblesort(int arr[], int n){
    for(int i=1; i<n; i++){
        //for round 1 and all other round up to n-1
        for(int j=0; j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped= true;
            }
        }
        if(swaped == false){ // if the array is already sorted 
            break;
        }
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
    bubblesort(arr, n);
}