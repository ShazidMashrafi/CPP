#include<bits/stdc++.h>
using namespace std;

void printVec(vector <int> &v)
{
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int N; // will store the size of array;
    cin>>N;
    vector<int>a[N]; // Will create an array named a which has the size N and will contain N vectors;
    // a is an array, and every a[i] is a vector.
    for(int i=0; i<N; ++i) // will take input of N vectors
    {
        int n; // will store the size of vector
        cin>>n;
        for(int j=0; j<n; ++j) // will take input of every value in vector
        {
            int x; // will store the values of vector
            cin>>x;
            a[i].push_back(x); // every a[i] is a vector v;
        }
    }
    for(int i=0; i<N; ++i) //Need to output every vector of the array
    {
        printVec(a[i]);
    }
}