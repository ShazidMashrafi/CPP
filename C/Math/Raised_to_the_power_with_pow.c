#include<stdio.h>
#include<math.h>
int main()
{
    float base,exp;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter power: ");
    scanf("%f",&exp);
    float result= pow(base,exp);
    printf("Result: %.2f",result);
    return 0;
}