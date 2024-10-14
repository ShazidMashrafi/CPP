// upper_bound() is a standard library function in C++ defined in the header .
// It returns an iterator pointing to the first element in the range [first, last]
// that is greater than value, or last if no such element is found. The elements in
// the range shall already be sorted or at least partitioned with respect to val.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n); // Array's needs to be sorted to upper bound to work in log(n)
    
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // upper_bound(starting,ending, the value we need to find)
    // Will return an address of the upper bound

    int *ptr1 = upper_bound(a, a + n, 5); // Will find the upper bound of 5
    cout << (*ptr1) << endl;              // In this case it will be 7

    int *ptr2 = upper_bound(a, a + n, 7); // Will find the upper bound of 7
    cout << (*ptr2) << endl;              // In this case it will be 8

    int *ptr3 = upper_bound(a, a + n, 26); // Will find the upper bound of 26
    cout << (*ptr3) << endl;               // In this case it will return the nth value of the array because upper bound of 26  doesn't exist

    int *ptr4 = upper_bound(a, a + n, 30); // Will find the upper bound of 30
    if (ptr4 == a + n)                     // ptr will be equal to a+n
    {
        cout << "Not found";
    }
    else
        cout << (*ptr4) << endl;
}