#include<iostream>
#include<iomanip> //Needed for setprecision();
using namespace std;

int main()
{
    double num1,num2,sum,sub,mul,div;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    sum= num1+num2;
    cout<<"The Summation is: "<<sum<<endl;

    cout<<showpoint;//shows decimal points for every output below it until another condition is applied.
    //similarly "cout<<noshowpoint" removes decimal point for every output below it until another condition is applied.
    //By default shows 6 digits in total.
    sub= num1-num2;
    cout<<"The Substraction is: "<<sub<<endl;

    mul= num1*num2;
    cout<<"The Multiplication is: "<<mul<<endl;

    div= num1/num2;
    cout<<"The Division is: "<<div<<endl<<endl<<endl;



    cout<<showpoint;
    sum= num1+num2;
    cout<<"The Summation is: "<<sum<<endl;

    cout<<setprecision(10); //shows 10 digits in total. 
    //Affects all outputs below until another condition is applied.
    sub= num1-num2;
    cout<<"The Substraction is: "<<sub<<endl;

    mul= num1*num2;
    cout<<"The Multiplication is: "<<mul<<endl;

    div= num1/num2;
    cout<<"The Division is: "<<div<<endl<<endl<<endl;



    cout<<showpoint;
    sum= num1+num2;
    cout<<"The Summation is: "<<sum<<endl;

    cout<<fixed; //Used before set precision, if used setprecision counts digits only after precision.
    cout<<setprecision(2);
    sub= num1-num2;
    cout<<"The Substraction is: "<<sub<<endl;

    mul= num1*num2;
    cout<<"The Multiplication is: "<<mul<<endl;

    div= num1/num2;
    cout<<"The Division is: "<<div<<endl<<endl<<endl;



    cout<<showpoint<<fixed<<setprecision(5);
    sum= num1+num2;
    cout<<setw(25)<<"The Summation is: "<<sum<<endl;

    sub= num1-num2;
    cout<<setw(15)<<"The Substraction is: "<<sub<<endl;

    mul= num1*num2;
    cout<<setw(5)<<"The Multiplication is: "<<mul<<endl;

    div= num1/num2;
    cout<<setw(40)<<"The Division is: "<<div<<endl<<endl<<endl;
}