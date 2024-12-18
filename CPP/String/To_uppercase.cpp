#include<iostream>
using namespace std;

int main()
{
    string s="Shazid";
    for(auto &ch:s)
    {
        ch=toupper(ch);
    }
    cout<<"Changed string is "<<s<<endl;
}