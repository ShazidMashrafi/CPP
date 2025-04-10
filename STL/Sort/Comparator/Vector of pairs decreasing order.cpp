#include <bits/stdc++.h>
using namespace std;

bool want_swap(pair<int,int>a, pair<int,int>b)
{
    if (a < b) return true;
    else return false;
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
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (want_swap(v[i], v[j]))
                swap(v[i], v[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " "<<v[i].second<<endl;
    }
}