#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v)
{
    cout<<v.size()<<endl;
    for(auto &it: v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v ={1,2,3,4,5,6,7};
    print(v);

    // vector_name.insert(position iterator,value)
    auto it=v.begin()+4;
    v.insert(it,100);
    print(v);
}