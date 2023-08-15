// none_of is function that returns true if none of the elements follow a specific rule
// else it returns false

#include<bits/stdc++.h>
using namespace std;

bool is_greater_than_10(int x)
{
    return x>10;
}

int main()
{
    vector<int>v={2,3,5};
    cout<<none_of(v.begin(),v.end(),is_greater_than_10);
}