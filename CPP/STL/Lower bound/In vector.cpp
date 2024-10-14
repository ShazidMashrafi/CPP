// The lower_bound() method in C++ is used to return an iterator pointing to the first
// element in the range [first, last) which has a value not less than val.
// This means that the function returns an iterator pointing to the next smallest number 
// just greater than or equal to that number. If there are multiple values that are equal
// to val, lower_bound() returns the iterator of the first such value.


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
    sort(a.begin(),a.end()); // Array's need to be sorted to lower bound to work in log(n)
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //lower_bound(starting,ending, the value we need to find)
    // Will return an address of the lower bound

    auto it1 = lower_bound(a.begin(),a.end(),5); // Will find the lower bound of 5
    cout<<(*it1)<<endl; // In this case it will be 5 because 5 exists

    auto it2 = lower_bound(a.begin(),a.end(),6); // Will find the lower bound of 6
    cout<<(*it2)<<endl; // In this case it will be 7 because 6 doesn't exist
    
    auto it3 = lower_bound(a.begin(),a.end(),26); // Will find the lower bound of 26
    cout<<(*it3)<<endl; // In this case it will return the nth value of the array because lower bound of 26  doesn't exist
    
    auto it4 = lower_bound(a.begin(),a.end(),30); // Will find the lower bound of 30
    if(it4==a.end())  // it will be equal to a+n
    {
        cout<<"Not found";
    }
    else cout<<(*it4)<<endl;
}