#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,sum=0;
    //printf("Summation of number raised to the power 3\n");
    printf("Enter number: ");
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        sum= sum+ 1/i;
        if(i==1)
            printf("1/%.2f +",i);
        else if(i==n)
            printf(" 1/%.2f",i);
        else
            printf(" 1/%.2f +",i);
    }
    printf(" = %.2f",sum);
    getch();
}

