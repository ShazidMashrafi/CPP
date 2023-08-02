// upper_bound() is a standard library function in C++ defined in the header . 
// It returns an iterator pointing to the first element in the range [first, last] 
// that is greater than value, or last if no such element is found. The elements in 
// the range shall already be sorted or at least partitioned with respect to val. 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end()); // Array's need to be sorted to upper bound to work in log(n)
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //upper_bound(starting,ending, the value we need to find)
    // Will return an address of the upper bound

    auto it1 = upper_bound(a.begin(),a.end(),5); // Will find the upper bound of 5
    cout<<(*it1)<<endl; // In this case it will be 7

    auto it2 = upper_bound(a.begin(),a.end(),7); // Will find the upper bound of 7
    cout<<(*it2)<<endl; // In this case it will be 8
    
    auto it3 = upper_bound(a.begin(),a.end(),26); // Will find the upper bound of 26
    cout<<(*it3)<<endl; // In this case it will return the nth value of the array because upper bound of 26  doesn't exist
    
    auto it4 = upper_bound(a.begin(),a.end(),30); // Will find the upper bound of 30
    if(it4==a.end())  // it will be equal to a+n
    {
        cout<<"Not found";
    }
    else cout<<(*it4)<<endl;
}