#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the number of students: ";
    cin>>n;
    int student[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter the number of student "<<i+1<<": ";
        cin>>student[i];
        sum=sum+student[i];
    }
    int min=student[0];
    int max=student[0];
    for(i=0;i<n;i++)
    {
        if(max<student[i]) max=student[i];
        if(min>student[i]) min=student[i];
    }
    float avg= (float)sum/n;
    cout<<"Total marks: "<<sum<<endl;
    cout<<"Average mark: "<<avg<<endl;
    cout<<"Maximum mark: "<<max<<endl;
    cout<<"Minimum mark: "<<min<<endl;
}