#include<stdio.h>
int main()
{
    int num,rem,i,fact,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(num==sum)
        printf("%d is a strong number.",num);
    else
        printf("%d is not a strong number.",num);
    return 0;
}
