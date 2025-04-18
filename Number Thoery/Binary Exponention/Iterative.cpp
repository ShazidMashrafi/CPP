#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
long long exponent(long long a, long long b)
{
    long long ans = 1;
    while(b)
    {
        if(b & 1)
            ans = (ans * a)%M;
        a = (a * a)%M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    cout<<exponent(2,13)<<endl;
}