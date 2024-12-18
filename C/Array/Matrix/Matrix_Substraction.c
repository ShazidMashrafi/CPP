#include<stdio.h>
int main()
{
    int i,j,no_row,no_col;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the number of rows: ");
    scanf("%d",&no_row);
    printf("Enter the number of columns: ");
    scanf("%d",&no_col);
    printf("Enter the elements of matrix A\n");
    for(i=0;i<no_row;i++)
    {
        for(j=0;j<no_col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the elements of matrix B\n");
    for(i=0;i<no_row;i++)
    {
        for(j=0;j<no_col;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("\n\nA =");
    for(i=0;i<no_row;i++)
    {
        printf("\t");
        for(j=0;j<no_col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nB =");
    for(i=0;i<no_row;i++)
    {
        printf("\t");
        for(j=0;j<no_col;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<no_row;i++)
    {
        for(j=0;j<no_col;j++)
        {
            C[i][j]= A[i][j]-B[i][j];
        }
    }
    printf("\nA-B= ");
    for(i=0;i<no_row;i++)
    {
        printf("\t");
        for(j=0;j<no_col;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}