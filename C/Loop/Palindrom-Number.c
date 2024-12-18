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
    if(num==sum)
        printf("The number is a palindrome number.");
    else
    printf("The number is not a palindrome number.");
    return 0;
}

