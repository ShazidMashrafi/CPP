#include<bits/stdc++.h>
using namespace std;
#define ll 	long long

const int N = 1e5+10;
const int INF = 1e9+10;

vector<pair<int,int>> g[N];

void dijkstra(int source)
{
    vector<int>vis(N,0);
    vector<int>dis(N,INF);

    set<pair<int,int>>st;
    st.insert({0,source});
    dis[source]=0;
    while(st.size())
    {
        auto node = *st.begin();
        int v =  node.second;
        int d = node.first;
        st.erase(st.begin());
        if(vis[v])  
            continue;
        vis[v] = 1;
        for(auto child : g[v])
        {
            int child_v =  child.first;
            int wt =  child.second;
            if(dis[v]+wt < dis[child_v])
            {
                dis[child_v] = dis[v] + wt;
                st.insert({dis[child_v],child_v});
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; ++i)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
    }
}