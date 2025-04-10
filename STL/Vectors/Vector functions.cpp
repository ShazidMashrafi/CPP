#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v)
{
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
}

int main()
{
    vector<int>v ={1,2,3};
    cout<<"size = "<<v.size()<<endl; //3
    cout<<"capacity = "<<v.capacity()<<endl;//3
    cout<<v.max_size()<<endl;
    print(v);

    v.push_back(4); 
    cout<<"size = "<<v.size()<<endl; //4
    cout<<"capacity = "<<v.capacity()<<endl; //2*last capacity if size exceeds capacity. so 6
    print(v);
    
    int cap=v.capacity();
    for(int i=5; i<=100; ++i)
    {
        v.push_back(i);
        if(cap!=v.capacity())
        {
            cap=v.capacity();
            cout<<"Capacity : "<<cap<<endl;
        }
    } //Will double in size every time size exceeds capacity
    print(v);

    cout<<v[99]<<endl; //doesn't check bounds
    // cout<<v[100]<<endl; //will print out 0
    cout<<v.at(99)<<endl; //checks bounds
    // cout<<v.at(100)<<endl; // will lead to out of bounds error
    cout<<endl;

    cout<<"Front : "<<v.front()<<endl; // will get the first element
    cout<<"Back : "<<v.back()<<endl; // will get the last element
    cout<<endl;

    //.insert(where to insert, what to insert)
    cout<<"Size : "<<v.size()<<endl;
    v.insert(v.begin(),-100); // will insert -100 in zeroth position
    cout<<"After inserting -100"<<endl;
    cout<<"New size = "<<v.size()<<endl; // size will increase
    print(v);

    cout<<"Size = "<<v.size()<<endl; // size will increase
    v.insert(v.begin()+1,-200); // will insert -200 in first position
    cout<<"After inserting -200"<<endl;
    cout<<"New size = "<<v.size()<<endl; // size will increase
    print(v);

    vector<int>v2={-1,-2,-3};

    // insertion from other containers and data types
    //.insert(where to insert, the elements to insert starting, the element to insert ending)
    cout<<"Size : "<<v.size()<<endl;
    v.insert(v.begin()+2,v2.begin(),v2.end()); // will insert the elements from v2 starting from begin to end, in second position of v
    cout<<"After inserting v2 into v1"<<endl;
    cout<<"New size : "<<v.size()<<endl; // size will increase by the number of elements inserted
    print(v);

    cout<<"size = "<<v.size()<<endl;
    v.pop_back(); //will remove the last element
    cout<<"After removing the last element"<<endl;
    cout<<"New size = "<<v.size()<<endl; //size will decrease by 1
    print(v);

    v.erase(v.begin()+1); // will erase the second element of v
    cout<<"After erasing the second element"<<endl;
    print(v);

    // .erase(where to start erasing from, the next element of where to end)
    v.erase(v.begin(), v.begin()+4); //will remove elements from postion 0 to 3, will stop when position 4 is reached
    cout<<"After erasing the elemets from postion 0 to 3"<<endl;
    print(v);

    //clear() will clear the whole vector
    v.clear();
    cout<<"After clearing vector"<<endl;
    if(v.empty()) //will check if the vector is empty or not
    {
        cout<<"Vector is empty"<<endl;
    }
    else print(v);
}