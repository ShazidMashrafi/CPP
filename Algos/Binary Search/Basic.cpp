#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int>v(n);
    for(int i=0; i<n; ++i)
        cin>>v[i];
    
    int L=0, R=n-1, ans=-1;
    while(L<=R)
    {
        int M = L + (R-L)/2;
        if(v[M]==target)
        {
            ans=M;
            break;
        }
        if(v[M]<target)
            L = M+1;
        else
            R = M-1;
    }
    cout<<ans<<endl;
}