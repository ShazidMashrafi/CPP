#include<iostream>
using namespace std;

int x=5;

int main()
{
    int x=10;
    cout<< x <<endl;
    cout<< :: x<<endl; // :: is the scope resulation operator, it points to global operator;
    ::x=15; //Can change the value of global operator.
    cout<< ::x<<endl;
}