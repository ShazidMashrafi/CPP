// Every element of a map is a pair
// Maps are not continuous like vectors
// Maps first element is called keys, second one is values
// Maps are always sorted using keys

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // map<key,value> variable_name;  //Key and value can be any data type or container
    map<int,string>m;
    m[1]= "abc";
    m[5]="def";
    m[3]="ghi";
    m.insert({4,"jkl"});
    // Accessing and using map takes O(log(n))
    
    cout<<m[1]<<endl; //will print out only the value of m[1];

    //Printing using iterators
    map<int,string>:: iterator it;
    for(it=m.begin(); it!=m.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    //Printing using auto iterators
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
