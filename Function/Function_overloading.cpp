#include<iostream>
using namespace std;

void sum(int x,int y,int z)
{
    int result=x+y+z;
    cout<<result<<endl;
}

void sum(int x,int y)
{
    int result=x+y;
    cout<<result<<endl;
}

int main()
{
    sum(20,30);
    sum(10,20,30);
}