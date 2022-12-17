// set in DSA using C++
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(8);
    s.insert(5);
    s.insert(3);

    for (auto i : s)
    {
        cout << i << " ";
    }
    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i;
    }
    cout << endl;
    cout<<"5 is present or not"<<s.count(5)<<endl;

set<int>::iterator itr = s.find(8);
cout<<"value present at itr: "<<*itr<<endl;
}