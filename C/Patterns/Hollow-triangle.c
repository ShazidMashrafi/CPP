#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n: ");
    scanf("%d",&n);
    for( row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col==1 || col==row || row==n)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}