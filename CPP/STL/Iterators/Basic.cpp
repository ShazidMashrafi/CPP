#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    //using normal variable
    int i=0;
    cout<<v[i]<<endl;

    //Using iterators
    vector<int> :: iterator it = v.begin();
    cout<< (*it)<<endl;
    //*it will access the first value of v because it was initialized using v.begin()
    //(*(it+1) will access the next value 
    //Although it+1 and i++ are not the same
    //it+1 will move to the next location
    //whereas it++ will move to the next iterator
    //In vector they will work the same because vectors are continuous, whereas map and sets are not
    //But it++ is always preferred

    //In loop

    //normal variable
    for(i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //Using iterator
    for(it=v.begin(); it!=v.end(); ++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
