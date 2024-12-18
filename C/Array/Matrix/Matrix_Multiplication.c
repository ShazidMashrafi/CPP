#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10];
    int i,j,k,r1,r2,c1,c2,sum=0;
    printf("Enter the number of rows for first matrix: ");
    scanf("%d",&r1);
    printf("Enter the number of columns for first matrix: ");
    scanf("%d",&c1);
    printf("Enter the number of rows for second matrix: ");
    scanf("%d",&r2);
    printf("Enter the number of columns for second matrix: ");
    scanf("%d",&c2);
    
    while(c1!=r2)
    {
        printf("Error!!\n");
        printf("Number of columns of first matrix does not equal to the number of rows of second matrix.\n Please input again.\n");
        printf("Enter the number of rows for first matrix: ");
        scanf("%d",&r1);
        printf("Enter the number of columns for first matrix: ");
        scanf("%d",&c1);
        printf("Enter the number of rows for second matrix: ");
        scanf("%d",&r2);
        printf("Enter the number of columns for second matrix: ");
        scanf("%d",&c2);
    }

    printf("Enter elements for first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("First matrix[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\nEnter elements for second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Second matrix[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("\n\nFirst Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    printf("\nResult matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}