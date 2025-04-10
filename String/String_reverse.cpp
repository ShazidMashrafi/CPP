#include<iostream>
using namespace std;

int main()
{
    string str,str_rev; // Strings have size none at the initialization.
    cin>>str;
    for(int i=str.size()-1; i>=0; i--)
    {
        str_rev.push_back(str[i]);  //push_back adds characters at the end of the string.
        // So every time push_back is done a character from str such as str[i] gets added to the end of the string str_rev
        // At first str_rev has length of none, so it gets added to 0 then 1 then 2 and vice versa
    }
    cout<<str_rev<<endl;
}