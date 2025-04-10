#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int d=str.empty(); // returns 1 if the string is empty else returns 0
    cout<<d<<endl;
}