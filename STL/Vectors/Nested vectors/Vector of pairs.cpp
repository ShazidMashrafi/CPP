#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>&v)
{
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
        // v[i] is a pair, lets say p, so v[i].first means p.first and so on 
    }
    cout<<endl;
}

int main()
{
    vector<pair<int,int>>v={ {1,2}, {3,4}, {5,6}};
    // This will make every ith index of the vector a pair, which can store 2 values.
    // Let's say
    // v[0] contains p0, and p0 contains 1 and 2;
    // v[1] contains p1, and p1 contains 3,4;
    // v[2] contains p2, and p2 contains 5,6;
    printVec(v);
}