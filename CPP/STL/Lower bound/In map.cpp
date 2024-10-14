#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>m; //Lower bound will only work in keys
    for(int i=0; i<n; ++i)
    {
        int x,y;
        cin>>x>>y;
        m.insert({x,y});
    }
    // Doesn't need to be sorted manually, coz already sorted.

    auto it1= m.lower_bound(5);
    cout<<(*it1).first<<" "<<(*it1).second<<endl;

    auto it2= m.lower_bound(6);
    cout<<(*it2).first<<" "<<(*it2).second<<endl;
    
    auto it3= m.lower_bound(26);
    if(it3==m.end())
    {
        cout<<"Not found"<<endl;
    }
    else cout<<(*it3).first<<" "<<(*it3).second<<endl;
}