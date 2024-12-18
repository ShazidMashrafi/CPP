#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=n/2;i<=n;i+=2)
    {
        for(j=1;j<n-i;j+=2) 
        {  
            printf("  ");  
        }
        for(j =1;j<=i;j++)
        {  
            printf("* ");  
        }
        for(j=1;j<=n-i;j++)
        {  
            printf("  ");  
        }  
        for(j=1;j<=i;j++)
        {  
            printf("* ");  
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++) 
            printf("  ");
        for(j=1;j<=2*i-1;j++)
            printf("* ");
        printf("\n");
    }
}