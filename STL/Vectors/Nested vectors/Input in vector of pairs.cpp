#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>&v)
{
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<pair<int,int>>v;
    printVec(v); //Will output a 0 sized vector because no value was inserted.
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y}); //or v.push_back(make_pair(x,y))
        // will add the pair to vector 
    }
    printVec(v);
}