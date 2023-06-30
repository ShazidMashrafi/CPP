// Multisets are sets which can hold duplicate or double values
#include<bits/stdc++.h>
using namespace std;

void print(multiset<string>&s)
{
    for(auto &value: s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    multiset<string>s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc"); //previous abc will not get replaced, but will get inserted twice
    s.insert("zsdf");
    s.insert("jkl");
    
    //If same values exist multiple times, find() will function will find the first input
    auto it=s.find("abc");
    if(it!=s.end()) s.erase(it); // will delete the first input of the same value

    s.erase("zsdf"); // will delete every zsdf

    print(s);
}

