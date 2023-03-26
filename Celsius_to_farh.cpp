#include<iostream>
using namespace std;

int main()
{
    double farn,cels;
    cout<<"Enter temperature in Celsius: ";
    cin>>cels;
    farn=1.8*cels+32;
    cout<<"Temperature in Fahrenheit is "<<farn;
}