#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    cout<<"After adding values to v"<<endl;
    cout<<"Vector 1"<<endl;
    printVec(v);

    vector<int>v2 =v; //This will copy v into v2.
    // The time complexity of copying a vector is O(n);
    cout<<"After copying vector 1 to vector 2"<<endl;
    cout<<"Vector 2: "<<endl;
    printVec(v2);

    //but any changes made to v2 will not reflect to v;
    v2.push_back(3);
    cout<<"After adding 3 to vector 2:"<<endl;
    cout<<"Vector 1"<<endl;
    printVec(v);
    cout<<"Vector 2"<<endl;
    printVec(v2);

    //But if we make a reference vector then change will take effect and time complexity will not be a concern
    vector<int>&v3=v;
    cout<<"After making a reference vector 3 to vector 1"<<endl;
    cout<<"Vector 1"<<endl;
    printVec(v);
    cout<<"Vector 3"<<endl;
    printVec(v3);

    v3.push_back(3); //This will reflect on v
    cout<<"After adding 3 to vector 3"<<endl;
    cout<<"Vector 1"<<endl;
    printVec(v);
    cout<<"Vector 3"<<endl;
    printVec(v3);
}