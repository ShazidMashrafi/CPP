#include<stdio.h>
int main()
{
    int array1[30],array2[30],i,n;
    printf("How many numbers in array 1? ");
    scanf("%d",&n);
    printf("Enter values:");
    for(i=0;i<n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&array1[i]);
    }
    printf("Array 1: ");
    for(i=0;i<5;i++)  
        printf("%d ",array1[i]);
    printf("\nCopying values...\n");
    for(i=0;i<n;i++)
        array2[i] = array1[i];
    printf("Array 1 values copied to Array 2.\n");
    printf("New Array 2: ");
    for(i=0;i<n;i++)
        printf("%d ",array2[i]);
    return 0;
    }