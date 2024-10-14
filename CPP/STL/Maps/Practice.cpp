/*
Given N strings, print unique strings in
lexicographical order with their frequency.

Constrains
N<=10^5
S<=100
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        //m[s] = m[s] + 1; // Initially m[s] is 0 because its empty;
        m[s]++; // will increase the value portion of map every time same string is encountered.
    }

    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl; 
    }
}
