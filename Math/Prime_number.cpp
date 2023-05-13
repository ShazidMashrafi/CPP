#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=2;i*i<n;i++) //using sqrt takes time
    {
        if(n%i==0) 
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && n>1) cout<<"Prime"<<endl; 
    else cout<<"Not prime"<<endl;
}