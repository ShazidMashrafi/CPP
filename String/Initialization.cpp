#include<iostream>
#include<string>
using namespace std;

int main()
{
    string iamempty; //Declaring an empty string
    string helloThere ("How may I help you?"); //Assigning a string while declaration
    string theReply = "Can I get a coffee?"; // Assigning while declaration
    iamempty = "Sure! How would you like it?"; // Assigning after declaration
    string theAnswer = iamempty; //Copying string iamempty to theAnser
    string aLot (10,'s'); // will store s 10 number of times in aLot
    string someSs (aLot); // Copying aLot to someSs
    string theRequest = "With a lot of sugar. Thanks"; 

    cout<<helloThere<<endl<<theReply<<endl;
    cout<<theAnswer<<endl<<theRequest<<someSs<<endl;
}