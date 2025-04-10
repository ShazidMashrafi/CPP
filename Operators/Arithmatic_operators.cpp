#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    int sum= num1+num2;
    cout<<"The Summation is: "<<sum<<endl;

    int sub= num1-num2;
    cout<<"The Substraction is: "<<sub<<endl;

    int mul= num1*num2;
    cout<<"The Multiplication is: "<<mul<<endl;

    double div= (double)num1/num2;
    cout<<"The Division is: "<<div<<endl;

    int rem= num1%num2;
    cout<<"The Remainder is: "<<rem<<endl;
}