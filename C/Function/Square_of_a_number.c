#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
   int num;
   printf("Enter any number: ");
   scanf("%d",&num);
   printf("The number squared is: %d",square(num));
}