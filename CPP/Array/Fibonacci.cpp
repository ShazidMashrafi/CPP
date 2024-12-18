#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the number of fibonacci numbers you want: ";
    cin>>n;
    int fibo[n];
    fibo[0]=0, fibo[1]=1;
    for(i=2;i<n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    cout<<"The first "<<n<<" Fibonacci numbers are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<fibo[i]<<" ";
    }
}