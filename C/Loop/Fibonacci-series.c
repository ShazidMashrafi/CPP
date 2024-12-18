#include<stdio.h>
int main()
{
    int first=0,second=1,i=0,fibo,n;
    printf("Enter range: ");
    scanf("%d",&n);
    while(i<n)
    {
        if(i<=1)
            fibo=i;
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf(" %d ",fibo);
        i++;
    }
    return 0;
}
