#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr : m)  // O(n*log(n))
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
 
int main()
{
    map<int,string>m;
    m[1]= "abc";
    m[5]="def";
    m[3]="ghi";
    m.insert({4,"jkl"});
    m[6]; //Will insert 6 into the map and value will be an empty string
    
    // keys are unique in maps, will not take double values
    m[5]="mno"; // will replace previous value;
    print(m);
}