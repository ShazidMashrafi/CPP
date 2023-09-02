#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; ++i)
        cin>>v[i];
    int to_find;
    cin>>to_find;
    int lo=0,hi=n-1;
    int mid;
    while(hi-lo>1)  // O(log(n))
    {
        mid=(hi+lo)/2;
        if(v[mid] < to_find)
            lo=mid+1;       // +1 because it is strictly lower, so mid can't be an answer
        else
            hi=mid;         // contains greater or equal so, mid can also be the answer
    }
    if(v[lo]==to_find)
        cout<<lo<<endl;
    else if(v[lo]==to_find)
        cout<<hi<<endl;
    else
        cout<<"Not found"<<endl;
}