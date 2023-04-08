#include<iostream>
using namespace std;

int main()
{
    int i,j,rows,cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    int a[rows][cols];
    cout<<"Please input the elements: "<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"Your entered matrix: "<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
