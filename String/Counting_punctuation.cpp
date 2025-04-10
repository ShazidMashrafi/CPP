#include<iostream>
using namespace std;

int main()
{
    string s="Hello,Shazid!";
    int count=0,c=0;
    for(auto ch:s)
    {
        if(ispunct(ch)) ++count;
    }
    cout<<"The number of punctuation in \""<<s<<"\" is "<<count<<endl;
}