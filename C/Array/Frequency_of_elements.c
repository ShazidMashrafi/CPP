#include<stdio.h>
int main()
{
    int array[20],checked[20];
    int n,i,j,count;
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%d]: ",i+1);
        scanf("%d",&array[i]);
        checked[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j]) 
            {
                count++;
                checked[j]=1;
            }
        }
        if(checked[i]==0)
        {
            printf("%d occurs %d times.\n",array[i],count);
        }
    }
}