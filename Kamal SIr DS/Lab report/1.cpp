#include<iostream>
using namespace std;
#define ll 	long long

int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    cout<<"The elements of the array are: ";
    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl;
}