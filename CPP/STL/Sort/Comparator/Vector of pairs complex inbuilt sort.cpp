// We want to sort in increasing order, but if both first element is same then decreasing

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a.first!=b.first) return a<b;
    else return a>b;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin >> x>>y;
        v.push_back({x,y});
    }
    
    sort(v.begin(),v.end(),cmp);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " "<<v[i].second<<endl;
    }
}