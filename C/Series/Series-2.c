#include<stdio.h>
#include<math.h>
int main()
{
    int n1,i,n2,sum=0;
    printf("Summation of number raised to the power 2\n");
    printf("Enter initial number: ");
    scanf("%d",&n1);
    printf("Enter ending number: ");
    scanf("%d",&n2);
    for(i=n1; i<=n2; i++)
    {
        sum= sum+i*i;
        if(i==n1)
            printf("%d^2 +",i);
        else if(i==n2)
            printf(" %d^2",i);
        else
            printf(" %d^2 +",i);
    }
    printf(" = %d",sum);
    return 0;
}
