#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v ={1,2,3,4,5,6,7};

    cout<<"v.begin() : " << *v.begin()<<endl; //will return the first element
    cout<<"v.end() : " << *v.end()<<endl; // will return the end of the vector

    // r means reverse order, in that case last element becomes first one, and first one becomes last one
    cout<<"v.rbegin() : " << *v.rbegin()<<endl; //will return the last element
    cout<<"v.end() : " << *v.rend()<<endl; // will return a location that is before start of the vector
}