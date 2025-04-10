#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an integer number: ";
    cin >> num;
    cout<<"Entered number is "<<num<<endl;

    double num2;
    cout<<"Enter an double number: ";
    cin >> num2;
    cout<<"Entered number is "<<num2<<endl;

    char ch;
    cout<<"Enter an character: ";
    cin >> ch;
    cout<<"Entered character is "<<ch<<endl;

    char name[20];
    cout<<"Enter a string: ";
    cin >> name;
    cout<<"Entered string is "<<name<<endl;
    getch();
}