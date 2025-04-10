#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    //These are O(n) algos in vectors or strings
    // Log(n) in maps, sets

    // min_element(starting,ending)
    // Gives pointer or location or iterator of the minimum element
    auto min = min_element(v.begin(), v.end());
    cout << *min << endl;
    // min_element index
    cout<< min-v.begin()<<endl;

    // max_element(starting,ending)
    // Gives pointer or location or iterator of the maximum element
    auto max = max_element(v.begin(), v.end());
    cout << *max << endl;
    // max_element index
    cout << max - v.begin() << endl;
    
    // accumulate(staring, ending, initial sum)
    // Gives the sum of elements+ initial sum
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

    // count(starting, ending, the element we need the count of)
    // counts the number of occurrences of any element
    int ct= count(v.begin(),v.end(),6);
    cout<<ct<<endl;

    // find(starting, ending,the element we need to find)]
    // finds and returns the location of an element if it is found, it not found then return .end()
    auto it= find(v.begin(),v.end(),1);
    if(it!=v.end()) cout<<*it<<endl;
    else cout<<"Not Found"<<endl;

    //reverse(starting, ending)
    // reverses vectors, strings etc. Doesn't make a copy.
    reverse(v.begin(),v.end());
    for(auto val : v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
