#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5};
    for(int value : v) //value will go through every element of v from first to last
    //This will create a copy  of elements of v
    {
        cout<<value<<" ";
    }
    cout<<endl;


    for(int value : v) 
    {
        value++; //value is increased but not vector in the battle feild
    }
    cout<<endl;

    for(int &value : v)   //using reference operator
    {
        
        cout<<value<<" "; 
    }
    cout<<endl;
}