//Useful for dealing with numbers larger than long long or 10^18
#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    cout<<str[str.size()-1]<<endl; //str[str.size()-1] prints last number as an character
    cout<<(int)str[str.size()-1]<<endl; //str[str.size()-1] extracts the last number but it's in ASCII
    int last_digit= str[str.size()-1] - '0'; //str[str.size()-1] extracts the last number and minuses the value of 0 in ASCII to get integer
    cout<<last_digit<<endl;
}