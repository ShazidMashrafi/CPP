// any_of is function that returns true if any element follow a specific rule
// else it returns false

#include<bits/stdc++.h>
using namespace std;

bool is_even(int x)
{
    return !(x&1);
}
onstructive algorithmsimplementation*1000
onstructive algorithmsimplementation*1000

int main()
{
    vector<int>v={2,3,5};
    cout<<any_of(v.begin(),v.end(),is_even);
}