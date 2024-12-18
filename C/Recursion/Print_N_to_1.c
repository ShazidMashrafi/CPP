//This is using tail-recursive function.
//Tail recursive are when function call is last thing done by the function.
//And after returning back there is nothing that needs to be evaluated.

#include<stdio.h>

void fun(int n)
{
    if(n==0)
        return;
    else printf("%d ",n);
    fun(n-1);
}

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    fun(num);
}