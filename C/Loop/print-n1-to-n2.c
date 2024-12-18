#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("Starting number: ");
    scanf("%d",&n1);
    printf("Ending number: ");
    scanf("%d",&n2);
    for(i=n1; i<=n2; i++)
    {
        printf("\n%d",i);
    }
    return 0;
}
