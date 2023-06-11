// Compiler does to evaluate does extracts the type of an expression only
#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    int i=5;
    decltype(i) j=2; // j becomes whatever data type i is.
    cout<<i<<endl;
    cout<<typeid(i).name()<<endl;
    cout<<j<<endl;
    cout<<typeid(j).name()<<endl;
}