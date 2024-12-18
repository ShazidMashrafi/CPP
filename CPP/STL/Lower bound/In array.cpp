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
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n); // Array's need to be sorted to lower bound to work in log(n)
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //lower_bound(starting,ending, the value we need to find)
    // Will return an address of the lower bound

    int *ptr1 = lower_bound(a,a+n,5); // Will find the lower bound of 5
    cout<<(*ptr1)<<endl; // In this case it will be 5 because 5 exists

    int *ptr2 = lower_bound(a,a+n,6); // Will find the lower bound of 6
    cout<<(*ptr2)<<endl; // In this case it will be 7 because 6 doesn't exist
    
    int *ptr3 = lower_bound(a,a+n,26); // Will find the lower bound of 26
    cout<<(*ptr3)<<endl; // In this case it will return the nth value of the array because lower bound of 26  doesn't exist
    
    int *ptr4 = lower_bound(a,a+n,30); // Will find the lower bound of 30
    if(ptr4==a+n)  // ptr will be equal to a+n
    {
        cout<<"Not found";
    }
    else cout<<(*ptr4)<<endl;
}