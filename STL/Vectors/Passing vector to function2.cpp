#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) //This function will directly reference v from main function,so time
{
     v.push_back(6); //This will effect output, because its a reference
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    printVec(v);
}