#include<stdio.h>

int OddArrayMid(int array[],int n)
{
    return array[n/2];
}

int EvenArrayMid(int array[],int n,int *mid1,int *mid2)
{
    *mid1=array[(n-1)/2];
    *mid2=array[n/2];
}

int main()
{
    int Array[100],n,i;
    printf("Enter the number of elements in Array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }
    if(n%2!=0)
    {
        int mid=OddArrayMid(Array,n);
        printf("The middle of the array is: %d",mid);
    }
    else
    {
        int mid1,mid2;
        EvenArrayMid(Array,n,&mid1,&mid2);
        printf("Middle of the array are: %d and %d",mid1,mid2);
    }
}
