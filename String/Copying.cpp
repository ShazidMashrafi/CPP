#include<iostream>
using namespace std;

int main()
{
    string s1="Shazid";
    string s2;

    s2=s1; //string copying
    cout<<s2<<endl;

    string s3 (s1); // Also copies
    cout<<s3<<endl;
}