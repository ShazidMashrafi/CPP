#include<stdio.h>
int main()
{
    int i,n, A[100];
    printf("Reverse output of a Array:\n");
    printf("-----------------\n");
    printf("Enter how many values you want: ");
    scanf("%d",&n);
    printf("Enter the values: \n");
    for(i=0;i<n;i++)
    {
        printf("A[%d] = ",i+1);
        scanf("%d",&A[i]);
    }
    printf("The reverse of the Array is: ");
    for(i=n-1;i>=0;i--)
        printf("%d ",A[i]);
}