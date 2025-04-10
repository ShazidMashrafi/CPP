// all_of is function that returns true if all elements follow a specific rule
// else it returns false

#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x)
{
    return x>0;
}

int main()
{
    vector<int>v={2,3,5};
    cout<<all_of(v.begin(),v.end(),is_positive);
}