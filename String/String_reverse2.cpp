#include<iostream>
#include<string.h>
#include<algorithm>  // reverse is defined in algorithm header
using namespace std;

int main()
{
    string s="Shazid";
    reverse(s.begin(),s.end());
    cout<<"reversed string is: "<<s<<endl;
}