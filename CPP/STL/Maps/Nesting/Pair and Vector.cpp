#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;  //map will contain pair as key and vector as value. Each pair will contain two strings
    int n;
    cin>>n; //size of vector
    for(int i=0; i<n; ++i)
    {
        string fn,ln; // Pair's strings
        int ct; // for vector
        cin>>fn>>ln>>ct;
        for(int j=0; j<ct; ++j)
        {
            int x; // Will take input of the elements of vector
            cin>>x;
            m[{fn,ln}].push_back(x); // m[{fn,ln}] will insert fn and ln strings in pair thus keys in map
            // m[{fn,ln}].push_back will work as v.push_back thus inserting values in the vector
        }
    }
    for (auto &pr: m) // pr will be a pair, whose first element is the key of the map, and second element value of the map
    {
        auto &name= pr.first; //pr.first is the key of the map, meaning pr.first is a pair itself, so name is pair
        auto &list = pr.second; //pr.second is a vector, so list is a vector
        cout<<name.first<<" "<<name.second<<endl; // name.first == pr.first.first, name.second==pr.first.second
        cout<<list.size()<<endl; // getting the size of list vector
        for(auto &element : list) // element is a value of the vector
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
}