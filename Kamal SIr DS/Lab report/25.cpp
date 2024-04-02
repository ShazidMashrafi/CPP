//Implement binary search algorithm
#include<iostream>
using namespace std;

void BINARY_SEARCH(int arr[], int n, int k)
{
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            break;
        }
        else if(arr[mid]<k)
            l = mid+1;
        else
            r = mid-1;
    }
    if(ans==-1)
        cout<<"\nTarget not found"<<endl;
    else 
        cout<<"\nTarget found at position: "<<ans+1<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: ";
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    int k;
    cout<<"\nEnter target value: ";
    cin>>k;
    BINARY_SEARCH(arr,n,k);
}