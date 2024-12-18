#include<stdio.h>
int main()
{
    int i,n1,n2,mul=1;
    printf("Multiplication from a number to another number.\n");
    printf("Enter starting number: ");
    scanf("%d",&n1);
    printf("Enter ending number: ");
    scanf("%d",&n2);
    for(i=n1; i<=n2; i++)
    {
        mul= mul*i;
        if(i==n1)
            printf("%d x ",i);
        else if(i==n2)
            printf("%d",i);
        else printf("%d x ",i);
    }
    printf(" = %d",mul);
    getchar();
}
