#include<stdio.h>
void sum (int a,int b,int c)
{
    printf("The sum is: %d\n",a+b+c);
}
void sub(int a,int b)
{
    printf("Subtraction is: %d\n",a-b);
}
int main()
{
    sum(10,20,30);
    sum(1,2,3);
    sum(100,200,300);
    sub(20,10);
}
//Video tutorial- https://youtu.be/f9rcjQVoaSU