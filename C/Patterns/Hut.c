#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    //printing pyramid on top
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
            printf("* ");
        printf("\n");
    }

    //printing bottom rectangles as two parts pattern and one part empty spaces
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {   
            if((2*n-1)%3==0)
            {
                if( j>(2*n-1)/3 && j<=(2*n-1)*2/3 ) printf("  ");
                else printf("* ");
            }
            else if ((2*n-1)%3==1)
            {
                if( j>(2*n-1)/3 && j-1<=(2*n-1)*2/3 ) printf("  ");
                else printf("* ");
            }
            else if((2*n-1)%3==2)
            {
                if( j-1>(2*n-1)/3 && j<=(2*n-1)*2/3 ) printf("  ");
                else printf("* "); 
            }  
        }
        printf("\n");
    }
    return 0;
}