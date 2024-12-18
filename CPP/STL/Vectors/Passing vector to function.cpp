#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v) //This will get a copy of v from main function, so any changes made here will not reflect to main v;
// so this function will have time complexity of O(n)
{
    v.push_back(6); //This will not effect output
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