#include<iostream>
using namespace std;

int main()
{
    string str,str_rev; // Strings have size none at the initialization.
    cin>>str;
    for(int i=str.size()-1; i>=0; i--)
    {
        str_rev.push_back(str[i]);
    }
    if(str==str_rev) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}