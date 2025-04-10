//Comparators are functions that define the behaviour of sort

#include<bits/stdc++.h>
using namespace std;

bool want_swap(int a,int b)  // Comparator function
{
    if(a>b) return true;   // will sort when a>b
    else return false;
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
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(want_swap(v[i],v[j])) // Comparator function call
                swap(v[i],v[j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}