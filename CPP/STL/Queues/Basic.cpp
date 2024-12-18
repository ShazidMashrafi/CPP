// Queue is first in first out

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>q;
    q.push("abc"); // Adds the element in queue
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    while(!q.empty())
    {
        cout<<q.front()<<endl; //see's or views the front most element;
        q.pop(); //deletes the front most element;
    }
}