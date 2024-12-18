#include<stdio.h>
void minMax(int a[], int n, int *min, int *max)
{
    int i;
    *min=*max= a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>*max)
            *max= a[i];
        if(a[i]<*min)
            *min=a[i];
    }
}

int main()
{
    int A[100],n,i,min,max;
    printf("Enter the amount of entries in array: ");
    scanf("%d",&n);
    printf("Enter values: ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    minMax(A,n,&min,&max);
    printf("The maximum value is %d\n",max);
    printf("The minimum value is %d",min);
    return 0;
}