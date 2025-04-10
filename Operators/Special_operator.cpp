#include<iostream>
using namespace std;

int main()
{
    int x,y,s,sum;
    float a;
    double b;
    char c;
    int array[10];
    char string[20];

    s=sizeof(x);
    cout<<"Size of is X is"<<endl;
    s=sizeof(y);
    cout<<"Size of Y is "<<s<<endl;
    s=sizeof(a);
    cout<<"Size of A is "<<s<<endl;
    s=sizeof(b);
    cout<<"Size of B is "<<s<<endl;
    s=sizeof(c);
    cout<<"Size of C is "<<s<<endl;
    s=sizeof(array);
    cout<<"Size of Array is "<<s<<endl;
    s=sizeof(string);
    cout<<"Size of String is "<<s<<endl;

    sum=(x=20,y=10,x+y); //Using comma operator.
    cout<<"The sum is "<<sum;
}