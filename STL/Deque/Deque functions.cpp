#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>d={1,2,3,4,5};
    cout<<"Size : "<<d.size()<<endl;

    cout<<"Third element : "<<d[2]<<endl;

    cout<<"First element : "<<d.front()<<endl;
    cout<<"Last element : "<<d.back()<<endl;

    for(auto it : d)
        cout<<it<<" ";
    cout<<endl;

    cout<<"Size : "<<d.size()<<endl;
    d.push_back(100);
    d.push_back(200);
    d.push_front(-1);
    d.push_front(-2);
    cout<<"Size : "<<d.size()<<endl;
    for(auto it : d)
        cout<<it<<" ";
    cout<<endl;

    d.pop_back();
    d.pop_front();
    cout<<"Size : "<<d.size()<<endl;
    for(auto it : d)
        cout<<it<<" ";
    cout<<endl;

}