#include<iostream>
using namespace std;

void displayArray(int array[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int num[]={10,20,30,40,50};
    displayArray(num,5);
}
