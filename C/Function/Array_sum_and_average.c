#include<stdio.h>

int ArraySum(int a[],int len)
{
    int i,s=0;
    for(i=0;i<len;i++)
    {
        s+=a[i];
    }
    return s;
}

float ArrayAvg(int n,int sum)
{
    return sum/n;
}

int main()
{
    int i,n=5,sum;
    float avg;
    int array[n];
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    sum= ArraySum(array,n);
    avg= ArrayAvg(n,sum);
    printf("Sum is %d\n",sum);
    printf("Average is %.2f",avg);
}