#include<iostream>
#include<stdio.h> //For gets and fgets
#include<string>
using namespace std;

int main()
{   
    char name[20],name2[20],name3[20];
    string name4,name5; //Needed for getline function
    cout<<"Enter your name: ";
    cin>>name; //Can't read after whitespace, input after white space remains in the buffer.
    cout<<"Welcome "<<name<<endl;

    cout<<"Enter your name: ";
    gets(name2); //Can read after whitespace but causes buffer overflow, will catch the input buffer from previous input;
    cout<<"Welcome2 "<<name2<<endl;

    cout<<"Enter your name: ";
    cin.ignore(); //Clears input buffer
    gets(name2);
    cout<<"Welcome2 "<<name2<<endl;

    cout<<"Enter your name: ";
    fgets(name3,sizeof(name3),stdin); //Doesn't have buffer overflow, recommended to use instead of gets;
    cout<<"Welcome3 "<<name3<<endl;

    cout<<"Enter your name again: ";
    getline(cin, name4); //Can read after whitespace, doesn't have buffer overflow, will catch input buffer.
    cout << "Welcome4 " << name4<<endl;

    cout<<"Enter your name again: ";
    cin.ignore(); //Clears the input buffer
    getline(cin, name5); 
    cout << "Welcome5 " << name5<<endl;
}