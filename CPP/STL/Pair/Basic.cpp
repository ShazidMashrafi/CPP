// Pair is a class who stores two values

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // pair<data_type or container, data_type or container> variable_name;
    pair <int,string> p;
    // Two ways to initialize a pair
    p = {2,"abc"};
    // or 
    // p= make_pair(2,"abc");
    cout<< p.first<<" "<<p.second<<endl; 
    //  variable_name.first   will access first value of pair and    variable_name.second   will access second value
}