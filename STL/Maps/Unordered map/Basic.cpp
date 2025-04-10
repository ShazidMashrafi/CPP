#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string>&m)
{
    cout<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    // Unordered maps are just maps who doesn't follow order
    // Average time complexity of unordered maps is O(1);
    // Unordered maps keys has limitations, it cannot have containers
    unordered_map<int,string> m;
    m[1]="abc";
    m[5]="def";
    m[3]="ghi";
    m[6]="jkl";
    print(m);
}