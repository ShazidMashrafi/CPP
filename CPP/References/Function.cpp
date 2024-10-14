#include<iostream>
using namespace std;

void increment(int &x, int y)
{
    x++;
    y++;
}

int main()
{
    int a=3;
    int b=5;
    cout<<a<<" "<<b<<endl;
    increment(a,b);
    cout<<a<<" "<<b<<endl;
}