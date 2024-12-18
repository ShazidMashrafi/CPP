#include<stdio.h>
int main()
{
    int n,num,count=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    printf("Total number of digits in %d is: %d",num,count);
    return 0;
}
