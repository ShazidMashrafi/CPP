#include<iostream>
using namespace std;

int main()
{
    bool p=true;
    string str;
    cin>>str;
    for(int i=0; i<str.size()/2; i++)
    {
        if(str[i]!=str[str.size()-1-i])
        {
            p=false;
            break;
        }
    }
    if(p) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}