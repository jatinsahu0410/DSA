// pointer with array
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7};
    /*
    cout<<"Address of first block is: "<<&arr<<endl;
    cout<<"Address of first block is: "<<&arr[1]<<endl;
    cout<<"Address of first block is: "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<"what if we use * operator:"<<*arr<<endl;
    cout<<"what if we use* operator:"<<*(arr+2)<<endl;
    cout<<"4th loc/ 3rd index:"<<*(arr+3)<<endl;
    cout<<"Value at 5th index:"<<5[arr]<<endl;
    cout<<"Value at 6th index: "<<*(5+arr);

   point with array function

   int temp[10];
   cout<<sizeof(temp)<<endl;
   int *p=&temp[0];
   cout<<p<<endl;
   cout<<sizeof(*p)<<endl;
   cout<<sizeof(p)<<endl;
   cout<<sizeof(&p)<<endl;
   cout<<&p<<endl;
   cout<<&temp<<endl;
   cout<<*p<<endl;


   int brr[20];
   its not possible tha brr= brr+1
   brr=brr+1;
   int *ptr=&brr[0];
   cout<<ptr<<endl;
   ptr=ptr+1;
   cout<<ptr<<endl;
   */

    char ch[6] = "abcde";
    cout <<"print arr alone:"<<arr<< endl;
    cout <<"printing *ch:"<<*ch << endl;

    char *ac = &ch[0];
    cout <<"Printing ac: "<<ac<< endl;
    // this is printing entire string.dev
    //  its not going to print the address.
    char abr='h';
    char *t = &abr;
    cout <<"Printing the pointer t: "<<t << endl;
    cout<<"address: "<<abr;
}
