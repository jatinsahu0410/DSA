#include <iostream>
#include <vector>
using namespace std;
int printvect(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int print_1dvect(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
}
vector<int> spiralprint(vector<vector<int>> &v)
{
    vector<int> arr;
    int row = v.size();
    int col = v[0].size(); // to find the size of vertical vector

    int count = 0;
    int total = row * col;
    // index initialisation
    int starting_row = 0;
    int starting_col = 0;
    int ending_row = row - 1;
    int ending_col = col - 1;
    while (count < total)
    {
        // print starting row
        for (int i = starting_col; count < total && i <= ending_col; i++)
        {
            arr.push_back(v[starting_row][i]);
            count++;
        }

        starting_row++;
        // print_1dvect(arr);
        // printing ending col
        for (int i = starting_row; count < total && i <= ending_row; i++)
        {
            arr.push_back(v[i][ending_col]);
            count++;
        }
        ending_col--;
        // print_1dvect(arr);
        // printing the last row
        for (int i = ending_col; count < total && i >= starting_col; i--)
        {
            arr.push_back(v[ending_row][i]);
            count++;
        }
        ending_row--;
        // print_1dvect(arr);
        // printing the starting column
        for (int i = ending_row; count < total && i >= starting_row; i--)
        {
            arr.push_back(v[i][starting_col]);
            count++;
        }
        starting_col++;
        // print_1dvect(arr);
    }
    print_1dvect(arr);
    return arr;
}
int main()
{
    vector<vector<int>> brr = {{1, 2, 3, 4}, {3, 5, 4, 5}, {2, 3, 9, 7},{4,6,9,8}};
    printvect(brr);
    cout << "The spiral output will be:" << endl;
    //    vector<int>r=spiralprint(brr);
    // print_1dvect(r);
    spiralprint(brr);
    // vector<int>d={2,3,4,5};
    // print_1dvect(d);
}
