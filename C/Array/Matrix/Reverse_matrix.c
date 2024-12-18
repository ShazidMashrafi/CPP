#include<stdio.h>
int main()
{
    int i,j,no_col,no_row;
    int A[10][10];
    printf("\n\nReverse out put of an 2D array.\n");
    printf("-------------------------\n");
    printf("Enter the number of rows: ");
    scanf("%d",&no_row);
    printf("Enter the number of colomns: ");
    scanf("%d",&no_col);

    printf("Enter your values:\n");
    for(i=0;i<no_row;i++)
    {
        for(j=0;j<no_col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Reversed elements of the 2D Array:\n");
    for(i=no_row-1;i>=0;i--)
    {
        for(j=no_col-1;j>=0;j--)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}