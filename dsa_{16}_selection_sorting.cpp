// Selection sort
#include <iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minindex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] <= arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
    printarray(arr, size);
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

    cout<<"The array after sorting is: ";
    selectionsort(arr, n);

}