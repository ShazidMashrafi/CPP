#include<bits/stdc++.h>
using namespace std;

void print(list<int>&l)
{
    for(auto element : l)
    {
        cout<<element<<" ";
    }
    cout<<endl<<endl;
}

int main()
{
    list<int> l = {0,1,2,3,4,5,5};
    cout<<"List 1"<<endl;
    cout<<"Size l1 : "<<l.size()<<endl; 
    print(l);

    list<int>l2=l; //will copy elements from l to l2
    cout<<"List 2"<<endl;
    cout<<"Size l2 : "<<l2.size()<<endl;
    print(l2);

    cout<<"First element : "<<l.front()<<endl;
    cout<<"Last element : "<<l.back()<<endl;

    cout<<boolalpha<<l.empty()<<endl;

    //inserting based on position
    auto it=l.begin();
    advance(it,2); //will advance iterator by 2 position at position 2.
    l.insert(it,100);
    print(l);

    //inserting based on element
    auto it2=find(l.begin(),l.end(),4);
    if(it2!=l.end()) l.insert(it2,200);
    print(l);

    l.erase(it); // it will erase whatever it is pointing at
    print(l); //it was pointing to 2
      
    l.remove(200); // it will remove 200 from the list if its found.
    print(l);

    l.clear();
    cout<<"After clearing the list"<<endl;
    if(l.empty())
    {
        cout<<"List is empty"<<endl;
    }
    else print(l);
}