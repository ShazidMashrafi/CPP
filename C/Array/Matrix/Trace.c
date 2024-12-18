#include<stdio.h>
int main()
{
    int A[10][10];
    int i,j,row,col,sum=0;
    printf("Trace of a matrix.\n");
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    printf("Input the elements of matrix:\n");
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
            if(i==j)
                sum = sum+A[i][j];
        }
    }
    printf("Trace of this matrix is: %d",sum);
    return 0;
}