#include<iostream>
using namespace std;
//consider both upper case and lower case same 
char tolowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return 0;
    }else{
        char temp= ch - 'A'+'a';
        //this happen due to ASCI value differnece
    }
}
//check a palindrome array
bool checkpalindrome(char arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(tolowercase(arr[s])!=tolowercase(arr[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
//reverse a char array
void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;
    // name[2]='\0';

    cout<<"Your name is ";
    cout<<name<<endl;

    int len =getlength(name);
    cout<<"The length of the string is: "<<len<<endl;
    reverse(name,len);
    cout<<"The reverse of the name is "<<name<<endl;
    cout<<"The given name is palindrome or not : "<<checkpalindrome(name,len)<<endl;;
    cout<<"Charater to lower case: "<<tolowercase('S');
    
}