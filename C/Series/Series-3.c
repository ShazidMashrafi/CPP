#include<stdio.h>
#include<math.h>
int main()
{
    int n1,i,n2,sum=0;
    printf("Summation of number raised to the power 3\n");
    printf("Enter initial number: ");
    scanf("%d",&n1);
    printf("Enter ending number: ");
    scanf("%d",&n2);
    for(i=n1; i<=n2; i++)
    {
        sum= sum+ pow(i,3);
        if(i==n1)
            printf("%d^3 +",i);
        else if(i==n2)
            printf(" %d^3",i);
        else
            printf(" %d^3 +",i);
    }
    printf(" = %d\n",sum);
    getch();
}

