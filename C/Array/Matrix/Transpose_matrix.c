#include<stdio.h>
int main()
{
    int A[10][10],trans[10][10];
    int i,j,row,col;
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
    printf("\nYour Matrix: \n");
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
            trans[j][i] = A[i][j];
        }
    }
    printf("\nTransposed Matrix:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}