#include<stdio.h>
int main()
{
    int A[20][20],usum=0,lsum=0;
    int i,j,row,col;
    printf("Sum of upper and lower triangles program.\n");
    printf("Enter your matrix.\n");
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Your matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                 usum=usum+A[i][j];
            }
            if(i>j)
            {
                lsum=lsum+A[i][j];
            }    
        }
    }
    printf("\nSum of upper triangle elements: %d",usum);
    printf("\n\nSum of lower triangle elements: %d",lsum);
}