#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr : m)
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
    m[6]="jkl";
    m[8]="mno";

    // find function will take a key and find its value,will return an iterator
    auto it= m.find(3);
    cout<<(*it).first<<" "<<(*it).second<<endl;

    it= m.find(7);
    //find will output variable_name.end() if no value is found
    if(it==m.end())
    {
        cout<<"No value"<<endl;
    }
    else 
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    //erase will delete the key and value.
    m.erase(6); //taking key as argument

    it=m.find(8);
    m.erase(it); //taking iterator as argument
    // if we use any iterator whose value doesn't exist then it will lead to a segmentation error
    
    it=m.find(7); //it will return m.end because 7's value doesn't exist;
    if(it!=m.end()) m.erase(it); // else it will lead to a segmentation error

    m.clear(); // will clear the whole map;

    print(m);
}