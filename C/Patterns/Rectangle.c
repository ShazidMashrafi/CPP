#include<stdio.h>
int main()
{
    int i,j,rows,cols;
    printf("Make a rectangle pattern\n");
    printf("_________________\n");
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}