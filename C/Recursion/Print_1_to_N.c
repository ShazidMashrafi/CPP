//This is a demonstration of non tail-recursive function
//A non tail recursive function is when function call is not the last thing done by function
//And after returnng back there is something that needs to be evaulated.

#include<stdio.h>

void fun(int n)
{
    if(n==0)
        return;
    fun(n-1);
    printf("%d ",n); //After returning from fun(n-1), it prints n, not n-1; 
}

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    fun(num);
}

//video - https://www.youtube.com/watch?v=HIt_GPuD7wk&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=77