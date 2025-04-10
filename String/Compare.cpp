#include<iostream>
using namespace std;

int main()
{
    string s1="Shazid", s2="Shazid";
    if(s1!=s2)
    {
        if(s1>s2) cout<<"\""<<s1<<"\""<<" is greater than "<<"\""<<s2<<"\""<<endl;
        else cout<<"\""<<s1<<"\""<<" is less than "<<"\""<<s2<<"\""<<endl;
    }
    else cout<<"\""<<s1<<"is equal to"<<"\""<<s2<<"\""<<endl;
}