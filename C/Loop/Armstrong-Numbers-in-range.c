#include<stdio.h>
int main()
{
    int  num1,num2,i,temp,r,sum=0;
    printf("Enter initial number: ");
    scanf("%d",&num1);
    printf("Enter final number: ");
    scanf("%d",&num2);
    for(i=num1; i<=num2; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\n",i);
        sum=0;
    }
    return 0;
}


