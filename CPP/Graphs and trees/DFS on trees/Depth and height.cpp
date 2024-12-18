#include<bits/stdc++.h>
using namespace std;
#define ll 	long long

const int N=1e5+10;
vector<int>g[N];
int depth[N], height[N];

void dfs(int vertex, int parent)
{
    //Take action on vertex after entering the vertex
    for(int child : g[vertex])
    {
        // Take action on child before entering child node
        if(child==parent)   
            continue;
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[vertex], height[child]+1);
        // Take action on child after exiting child node
    }
    //Take action on vertex before exiting the vertex
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n-1; ++i)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1,0);
    for(int i=1; i<=n; ++i)
        cout<<depth[i]<<" "<<height[i]<<endl;
} 