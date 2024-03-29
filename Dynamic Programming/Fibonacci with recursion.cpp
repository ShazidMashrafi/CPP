#include<bits/stdc++.h>
using namespace std;
#define ll 	long long

// 0 1 1 2 3 5 8 .....

int fib(int n)
{
    if(n==0)    return 0;
    if(n==1)    return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}
// Time complexity -> O(2^n)