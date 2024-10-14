// Stack is Last in first out type of data structure

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    s.push(2); // adds element to stack
    s.push(1);
    s.push(4);
    s.push(3);
    while(!s.empty())
    {
        cout<<s.top()<<endl; //sees or views the topmost element
        s.pop(); // deletes the top most element
    }
}