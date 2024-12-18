#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it;
    for(it= v_p.begin();  it!=v_p.end(); ++it)
    {
        cout<< (*it).first<<" "<<(*it).second<<endl; //*it is the value of the vector element, works like v[i]
    }


    //Another syntax
    // for(it= v_p.begin();  it!=v_p.end(); ++it)
    // {
    //     cout<< (it->first)<<" "<<(it->second)<<endl;  //This is used more often
    // }
}