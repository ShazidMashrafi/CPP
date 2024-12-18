#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum= sum*10+r;
        temp= temp/10;
    }
    printf("The reverse of number is: %d",sum);
    return 0;
}
