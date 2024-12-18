#include<stdio.h>
int main()
{
    int i,j,rows,cols,*p;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);

    int A[rows][cols]; 
    //Array needs contain the number of rows and cols inputted. If it is decleared with more, then pointer will show incorrect outputs with garbage values.

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(p= &A[0][0]; p<= &A[rows-1][cols-1]; p++)
    {
        printf("%d ",*p);
    }
}