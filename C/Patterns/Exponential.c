#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<pow(2,i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}