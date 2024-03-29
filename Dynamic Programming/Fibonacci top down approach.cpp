#include<bits/stdc++.h>
using namespace std;
#define ll 	long long
const int N = 1e5+10;

// 0 1 1 2 3 5 8 .....

vector<int>dp(N,-1);

int fib(int n)
{
    if(n==0)    return 0;
    if(n==1)    return 1;
    if(dp[n] != -1)     return dp[n];   // Memoise technic
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}
// Time complexity -> O(n)