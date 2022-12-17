//Reference variable 
#include<iostream>
using namespace std;
void update(int n){
    n++;
    cout<<"Increament is done inside the update function: "<<n<<endl;
}
void update2(int&n){
    n++;
    cout<<"The updated n is: "<<n<<endl;
}
int& update3(int n){
    int a=n;
    int &ans=a;
    cout<<"In the function: "<<ans<<endl;
    return ans;
}
int update4(int &n){
    n--;
    cout<<"The value of n is: "<<n<<endl;
    return n;
}
int sumarray(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    /*
    int i=8;
    int&j=i;

    cout<<"when we print j: "<<j<<endl;
    cout<<"When we print i: "<<i<<endl;
    j++;i++;j++;
    cout<<"after increament: "<<i<<endl;
    */
   //what is the need of reference variable
   /*
   int a=5;
   cout<<"before: "<<a<<endl;
   update(a);
   cout<<"after: "<<a<<endl;
   cout<<endl<<endl;
   */
   // if we usse the concept of refernce variable: 
   /*
   int b=5;
   cout<<"Before the call of function: "<<b<<endl;
   update2(b);
   cout<<"Value after the call of function: "<<b<<endl;
   */
  //if we use reference variable in output:
//   int c=5;
//   cout<<"Before: "<<c<<endl;
//   update3(c);
//   cout<<"after: "<<c<<endl;
//   return 0;

 
  int d=5;
  cout<<"Before: "<<d<<endl;
  update4(d);
  cout<<"After: "<<d<<endl;;



  // Static And Dynamic memory allocation
  char ch='q';
  cout<<"The size of the "<<sizeof(ch)<<endl;
  char* c=&ch;
  cout<<sizeof(c)<<endl;

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  //variable size array
  int* arr=new int[n];
  // for taking input
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"the sum of all the elements of array is: ";
  sumarray(arr, n);
}