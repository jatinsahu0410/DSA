// Binary search
// Peak index in mountain array
#include <iostream>
using namespace std;
int peak(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
// find the pivot element
int findpivot(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
};
int main()
{
    int arr[6] = {1, 2, 7, 20, 3, 0};
    cout << "The peak index of mountain array is: " << peak(arr, 6) << endl;

    int brr[5] = {5, 8, 0, 1, 3};
    cout << "The pivot element index is: " << findpivot(brr, 5) << endl;
}