#include<stdio.h>
int main()
{
    int  num,temp,r,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==num)
        printf("The number is a Armstrong number.");
    else printf("The number is not a Armstrong number");
    return 0;
}

