#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>prime_factors;
    for(int i=2; i * i<=n; ++i)     // Any composite number,n will have a factor before sqrt(n)
    {
        while(n%i==0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    if(n>1)
        prime_factors.push_back(n);    //Because when the last obtained n is a prime, it will not have any factor before sqrt(n)
    for(auto x:prime_factors)
        cout<<x<<" ";
    cout<<endl;
}