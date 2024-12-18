#include<iostream>
using namespace std;

int add(int a,int b)
{
    int sum=a+b;
    return sum;
}

int main()
{
    int result= add(10,20);
    cout<<result<<endl;

    cout<<add(30,39)<<endl;
}