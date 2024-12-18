#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b) //comparator function
{
    if(a>b) return false;
    else return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {;
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end(),cmp); //sort with comparator
    //if comparator returns false then sort executes;
    // if comparator returns true then it doesn't execute;

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}