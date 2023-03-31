#include<iostream>
using namespace std;

int main()
{
    double farn,cels;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>farn;
    cels= (farn-32)/1.8;
    cout<<"The temperature in Celsius is: "<<cels;
}