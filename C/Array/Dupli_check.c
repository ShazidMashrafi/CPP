#include<stdio.h>
int main()
{
    int array[20];
    int n,i,j,count=0;
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%d]: ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j]) count++;
        }
    }
    printf("The number of duplicates is %d",count);
}