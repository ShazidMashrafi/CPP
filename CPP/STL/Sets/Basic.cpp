// Sets are just maps whose have only keys, no values
#include<bits/stdc++.h>
using namespace std;

void print(set<string>&s)
{
    for(auto &value: s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    set<string>s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc"); //previous abc will get replaced
    auto it= s.find("abcd");
    if(it!=s.end())
    {
        s.erase(it);
    }
    print(s);
}

