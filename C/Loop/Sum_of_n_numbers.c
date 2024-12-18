#include<stdio.h>
int main()
{
    int i,n,num,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum=sum+num; 
    }
    avg= (float)sum/n;
    printf("The sum of %d is: %d\n",n,sum);
    printf("The average is: %.2f\n",avg);
    return 0;
}