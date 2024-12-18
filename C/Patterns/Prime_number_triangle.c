#include<stdio.h>
int Prime(int num)
{
    int i,flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
        return 0;
    else 
        return 1;
}
int main()
{
    int i,j,n,count=2;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            while(Prime(count))  //if any non-zero element goes in,the loop runs. Breaks if 0 goes in.
            {
                count++;
            }
            printf("%d\t",count);
            count++;
        }
        printf("\n");
    }
}