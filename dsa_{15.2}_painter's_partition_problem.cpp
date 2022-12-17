// painter's partition problem
#include <iostream>
using namespace std;
bool is_possible(int arr[], int n, int m, int mid)
{
    int paintercount = 1;
    int board = 0;
    for (int i = 0; i < n; i++)
    {
        if (board + arr[i] <= mid)
        {
            board += arr[i];
        }
        else
        {
            paintercount++;
            if (paintercount > m || arr[i] > mid)
            {
                return false;
            }
            board = arr[i];
        }
    }
    return true;
}
int painterpartition(int arr[], int n, int m)
{
    // where n is the size of array
    //  and m is number os painters avalible
    int s = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <=e)
    {
        if (is_possible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int m;
    cout << "Enter the number of painters: ";
    cin >> m;
    cout << "The min time required is: " << painterpartition(arr, 4, m)<<endl;
    int brr[5]={2, 5, 8,4,2};
    int a;
    cout<<"Enter the number of painters: ";
    cin>>a;
    cout<<"The min time required is: "<<painterpartition(brr, 5, a);
}