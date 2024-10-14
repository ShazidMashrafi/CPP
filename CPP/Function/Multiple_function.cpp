#include<iostream>
using namespace std;

void add(int,int);
void sub(int,int);
void mul(int,int);
void divi(int,int);

int main()
{
    add(20,30);
    sub(50,10);
    mul(6,3);
    divi(30,5);
}

void add(int a,int b)
{
    int sum=a+b;
    cout<<"Sum = "<<sum<<endl;
}
void sub(int a,int b)
{
    int result=a-b;
    cout<<"Substraction = "<<result<<endl;
}
void mul(int a,int b)
{
    int result=a*b;
    cout<<"Multiplication = "<<result<<endl;
}
void divi(int a,int b)
{
    float result= (float)a/b;
    cout<<"Division = "<<result<<endl;
}
