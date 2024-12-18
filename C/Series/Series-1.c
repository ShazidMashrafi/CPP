#include<stdio.h>
#include<math.h>
int main()
{
    int n1,i,n2,sum=0;
    printf("Summation of numbers\n");
    printf("Enter initial number: ");
    scanf("%d",&n1);
    printf("Enter ending number: ");
    scanf("%d",&n2);
    for(i=n1; i<=n2; i++)
    {
        sum= sum+i;
        if(i==n1)
            printf("%d +",i);
        else if(i==n2)
            printf(" %d",i);
        else
            printf(" %d +",i);
    }
    printf(" = %d\n",sum);
    getch();
}
