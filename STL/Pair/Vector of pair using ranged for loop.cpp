#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> v_p = {{1,2},{3,4}};
    for(pair<int,int> &value : v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}