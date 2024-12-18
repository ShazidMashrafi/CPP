#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=2*n;i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",count+'A');
            if(j<=i/2) 
                count++;
            else 
                count--;
        }
        count=0;
        printf("\n");
    }
}