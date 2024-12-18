#include<stdio.h>
int print(int n)
{
    if(n==1)
        return 1;
    else 
        return 1+print(n-1);
}
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("The number is %d",print(n));
}