#include <iostream>
using namespace std;
// to print row wise sum
void print_sum(int arr[3][4], int i, int j)
{
    cout << "Printing the sum: ";
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
// largest row sum
int largestrowsum(int arr[3][4], int i, int j)
{
    int max = INT8_MIN;
    int rowindex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if(sum > max){

            max = sum;
            rowindex = i;

        }
    }
    cout<<"The maximun sum is "<<max<<endl;
}
int main()
{
    int arr[3][4];

    // taking input
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing the array
    cout << "The array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    print_sum(arr, 2, 2);
    cout<<"THe maxinum row sum is: "<<largestrowsum(arr,3,4);
}   