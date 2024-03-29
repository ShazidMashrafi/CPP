#include<bits/stdc++.h>
using namespace std;
#define ll 	long long
const int N = 1e5+10;

// 0 1 1 2 3 5 8 .....

vector<int>dp(N,-1);


int main()
{
    int n;
    cin>>n;
    dp[0]=0;
    dp[1] = 1;
    for(int i=2; i<=n; ++i)
        dp[i]=dp[i-1]+dp[i-2];
    cout<<dp[n]<<endl;
}
// Time complexity -> O(n)