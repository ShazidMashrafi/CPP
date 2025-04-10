#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please enter A & B: ";
    cin>>a>>b;
    
    c=a&b;
    cout<<"Bitwise AND is "<<c<<endl;

    c=a|b;
    cout<<"Bitwise OR is "<<c<<endl;

    c=a^b;
    cout<<"Bitwise X-OR is "<<c<<endl;

    c=a<<2;
    cout<<"A left shifted by 2 is "<<c;

    c=b>>2;
    cout<<"B right shifted by 2 is "<<c;
}