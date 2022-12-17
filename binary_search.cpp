#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    //if the value is large and out of range of int then we can use this formula for mid
    int mid = start + ((end-start)/2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // if key is greater than we will now to right
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else // when key is less than mid then now to left
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int anu(int arr[], int size, int key){
    if(binarysearch(arr, size, key)== -1){
        cout<<"The key is not present "<<endl;
    }else{
        cout<<"The index for the key is: "<<binarysearch(arr, size, key);
    }
}
int main()
{
    int key1, key2;
    cout<<"Enter the of your choice: "<<endl;
    cin>>key1>>key2;
    int even[6] = {1, 3, 5, 9, 13, 45};
    int odd[5] = {2, 4, 7, 9, 14};

 anu(even, 6, key1); 
  anu(odd,5,key2);

    // cout<<"Index of 13 is: "<<ravu<<endl;
    // cout<<"Index of 7 is: "<<jsa<<endl;
    // if(jsa==-1){
    //     cout<<"The key is not present "<<endl;
    // }else{
    //     cout<<"The index of given number is: ";
    }

