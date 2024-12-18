#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    // Doesn't need to be sorted manually, coz already sorted.

    //This will work in O(n) 
    auto it1= lower_bound(s.begin(),s.end(),5);
    cout<<(*it1)<<endl;

    //This will work in log(n)
    auto it2= s.lower_bound(6);
    cout<<(*it2)<<endl;
    
    auto it3= s.lower_bound(26);
    if(it3==s.end())
    {
        cout<<"Not found"<<endl;
    }
    else cout<<(*it3)<<endl;
}