#include<stdio.h>
int main()
{
    int arr[10];
    int i,temp;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

}