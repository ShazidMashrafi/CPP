#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b) //comparator function
{
    return a>b;  // We can also return the swap we want;
    // if it's true then we don't need to swap anyway and the sort will not execute
    // if it's false then we need to swap and the sort executes
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end(),cmp); //sort with comparator

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}