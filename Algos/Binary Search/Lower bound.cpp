#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0; i<n; ++i)
        cin>>v[i];
    int L=0, R=n-1, ans=-1;
    while(L<=R)
    {
        int mid = L + (R-L)/2;
        if(v[mid]>=x)
        {
            ans=mid;
            R=mid-1;
        }
        else
            L=mid+1;
    }
    if(ans==-1)
        cout<<"Not found"<<endl;
    else
        cout<<"Found at position "<<ans<<" vale "<<v[ans]<<endl;
}