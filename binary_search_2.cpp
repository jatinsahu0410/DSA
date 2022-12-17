// first and last position of an element in a sorted aarry
// the array should be sorted otherwise it will not happen 
#include <iostream>
using namespace std;
int firstocc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // right part
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left part
            e = mid - 1;
        }
        mid = s + (e - s / 2);
    }
    return ans;
}
int lasto(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr1[8] = {1, 2, 8, 8,8,8,8, 10};
    cout << "The first occurrene of key is: " << firstocc(arr1, 8, 8) << endl;
    cout << "The last occurrene of key is: " << lasto(arr1, 8, 8) << endl;
    cout<<"The total number of occurrence is: "<<(lasto(arr1, 8, 8)- firstocc(arr1, 8, 8))+1<<endl;
    return 0;
}