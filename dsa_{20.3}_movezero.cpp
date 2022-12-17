// Move zero
#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void movezero(int arr[], int n)
{
    int i = 0; // here i indicates the non zero value
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    printarray(arr, n);
}
int main()
{
    int arr[5] = {0, 9, 0, 4, 3};

    printarray(arr, 5);
    cout << "The array after move zero is: ";
    movezero(arr, 5);
}