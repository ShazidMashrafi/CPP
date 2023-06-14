#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"Before swap x = "<<x<<" and y = "<<y<<endl;
    swap(x,y);
    cout<<"After swap x = "<<x<<" and y = "<<y<<endl;
}