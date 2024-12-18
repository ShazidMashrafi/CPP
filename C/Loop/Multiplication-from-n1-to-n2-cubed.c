#include<stdio.h>
#include<math.h>
int main()
{
    int i,n1,n2,mul=1;
    printf("Multiplication from a number to another number raised to the power 3.\n");
    printf("Enter starting number: ");
    scanf("%d",&n1);
    printf("Enter ending number: ");
    scanf("%d",&n2);
    for(i=n1; i<=n2; i++)
    {
        mul= mul*pow(i,3);
        if(i==n1)
            printf("%d^3 x ",i);
        else if(i==n2)
            printf("%d^3",i);
        else printf("%d^3 x ",i);
    }
    printf(" = %d",mul);
    getchar();
}
