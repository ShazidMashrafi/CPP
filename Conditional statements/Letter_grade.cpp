#include<iostream>
using namespace std;

int main()
{
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;
    if(mark>100 || mark<0) cout<<"Invalid mark";
    else if(mark>=80) cout<<"A+";
    else if(mark>=75) cout<<"A";
    else if(mark>=70) cout<<"A-";
    else if(mark>=65) cout<<"B+";
    else if(mark>=60) cout<<"B";
    else if(mark>=55) cout<<"B-";
    else if(mark>=50) cout<<"C+";
    else if(mark>=45) cout<<"C";
    else if(mark>=40) cout<<"D";
    else cout<<"F";
}