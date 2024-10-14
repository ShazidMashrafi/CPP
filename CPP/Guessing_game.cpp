#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    while(1)
    {
        int guess,random;
        cout<<"Guess a number between 1 and 5: ";
        cin>>guess;
        random=rand()%5+1;
        if(random==guess)
        {
            cout<<"Congrats. You have guessed the correct number."<<endl<<endl;
        }
        else
        {
            cout<<"Sorry your guess is incorrect."<<endl<<"The number was "<<random<<"."<<endl<<"Try again."<<endl<<endl;
        }
        
    }
}