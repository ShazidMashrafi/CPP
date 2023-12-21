#include<bits/stdc++.h>
using namespace std;

int minimum(vector<int> &v, int low, int high)
{
    if(v[low]<=v[high])
        return v[low];
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(v[low]>=v[mid] && v[high]>=v[mid])
            return v[mid];
        if(v[mid]>v[high])
            low = mid+1;
        else
            high = mid-1;
    }
    return v[low];
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v)  cin>>x;
    cout<<minimum(v,0,n-1)<<endl;
}