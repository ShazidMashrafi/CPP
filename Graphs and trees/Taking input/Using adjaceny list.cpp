#include<bits/stdc++.h>
using namespace std;
#define ll 	long long

const int N = 1e3+10;
vector<int>graph[N]; 

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; ++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v1);
        graph[v2].push_back(v2);
    }
}