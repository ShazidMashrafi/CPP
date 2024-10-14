//Vector is similar to array but it is dynamic in memory meaning it increase in size in demand

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // vector<data type or container> variable_name;
    vector<int> v; //now it has size 0;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x); //Adds x to the int of the vector 
    }
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}