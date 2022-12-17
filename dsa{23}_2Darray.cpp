#include <iostream>
using namespace std;
bool is_present(int arr[2][4], int key, int row, int col){
    for(int row=0; row<2;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]== key){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    cout << "Enter the 2D array: "<<endl;
    // create 2D array
    int arr[2][4] ={{1,3,2,42},{1,2,3,4}};
    /*
        // taking input in 2d array
        for(int i=0;i<2;i++){
            for(int j=0;j<4;j++){
                cin >> arr[i][j];
            }
        }*/
    // taking input in 2d array as column
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // print the 2D array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Enter the element that u wanna search: "<<endl;
    int target;
    cin>> target;

    if(is_present(arr, target, 3, 4)){
        cout<<"The given key is present.";
    }else{
      cout<<"The given key is not present.";
      }
}
