#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v ={1,2,3,4,5,6,7};
    auto it = v.begin()+4; //5
    cout<<"*v.begin =>"<<*v.begin()<<endl;
    cout<<"*it =>" <<*it<<endl; //5
    cout<<"*it - begin => "<< it-v.begin()<<endl; //4

    // v.insert(it,100); //{1,2,3,4,100,5,6,7}
    // cout<<"*v.begin =>"<<*v.begin()<<endl; //1
    // cout<<"*it =>" <<*it<<endl; //5
    // cout<<"*it - begin => "<< it-v.begin()<<endl; //garbage value because iterator is invalidated

    it = v.insert(it,100); // insert can also return the iterator where the insertion was done
    cout<<"*v.begin =>"<<*v.begin()<<endl; //1
    cout<<"*it =>" <<*it<<endl; //5
    cout<<"*it - begin => "<< it-v.begin()<<endl; //4
}