#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Sometimes we need to connect two arrays. Suppose we need to connect both ith element of a and b;
    int a[]={1,2,3};
    int b[]={4,5,6};
    pair<int,int>p_array[3]; // This is an array of pairs. This will make sure that ith of a and b is always connected.
    // Changes made to ai will also reflect on bi
    p_array[0]= {1,4};
    p_array[2]= {3,6};
    p_array[1]= {2,5};
    for(int i=0; i<3; ++i)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}