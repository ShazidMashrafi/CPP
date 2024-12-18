#include<stdio.h>
void calcpower(float b, float e)
{
    float i,result=1;
    for(i =1;i<=e;i++)
    {
        result = result * b;
    }
    printf("Result: %.2f",result); 
}
int main()
{
    float base,exp;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter exponent: ");
    scanf("%f",&exp);
    calcpower(base,exp);
}