// "auto" is a type specifier that assigns a data type automatically.
// Compiler evaluates expression and assigns the type the expression returns.
// So if it is hard to determine the type that a expression returns then we can use auto
// unknown type x,y;
// auto z = x+y;       //z will be assigned whatever type x+y returns
// All variables in auto declaration must have types that are consistant with each other
// auto i=5, *p=&i     //no errors because they both are actually int
// auto i=5, j=3.14    //will lead to an error, because i and j are not the same base type

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=5,j=2;
    auto k= i+j; // i and j both are int so the expression will return an int, so z will be assigned int
    cout<<i<<endl;
    cout<<typeid(i).name()<<endl;
    cout<<j<<endl;
    cout<<typeid(j).name()<<endl;
    cout<<k<<endl;
    cout<<typeid(k).name()<<endl;

    double m= 5.67, n= 10.33;
    auto o=m+n; // m and n are both double so o will be a double type
    cout<<m<<endl; 
    cout<<typeid(m).name()<<endl;
    cout<<n<<endl;
    cout<<typeid(n).name()<<endl;
    cout<<o<<endl;
    cout<<typeid(o).name()<<endl;

    auto p=i+m; // i is int and m is double, so expression will return double and p will be double type
    cout<<p<<endl;
    cout<<typeid(p).name()<<endl;
}